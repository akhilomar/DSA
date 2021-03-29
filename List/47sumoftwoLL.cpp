Q: Sum of two given LinkList

Node* SumLL(Node* h1, Node* h2){
    
    stack<int> s1, s2;
    while(h1){
        s1.push(h1->val);
        h1 = h1 -> next;
    }
    while(h2){
        s2.push(h2->val);
        h2 = h2 -> next;
    }

    int carry = 0;
    Node* res = NULL;

    while(!s1.empty() && !s2.empty()){
        Node* t1 = new Node((s1.top()+s2.top()+carry)%10);
        carry = (s1.top() + s2.top()+carry)/10;
        t1->next = res;
        res = t1;
        s1.pop();
        s2.pop();
    }  
    while(!s1.empty()){
        Node* t2 = new Node((s1.top()+carry)%10);
        carry = (s1.top() + carry)/10;
        t2->next = res;
        res = t2;
        s1.pop();
    }

    while(!s2.empty()){
        Node* t3 = new Node((s2.top()+carry)%10);
        carry = (s1.top()+carry)/10;
        t3 -> next = res;
        res = t3;
        s2.pop();
    }

    if(carry != 0){
        Node* t4 = new Node(carry);
        t4->next = res;
        res = t4;
    }

    return res;  

}