Q: Print Nth node from end in a given link list

ITERATIVE METHOD

void nodefend(Node* head, int n){
    if(!head)
        return;
    int l = 0;
    Node* counter = head;
    while(counter){
        l++;
        counter = counter -> next;
    }
    int l = l - n;
    while(l--){
        head = head -> next;
    }
    cout<<head->val;
}

RECURSIVE METHOD

void nodefend(Node* head, int n){
    static int i = 0;
    if(!head)
        return;
    nodefend(head->next, n);
    if(++i == n){
        cout<<head->val;
        return;
    }
}