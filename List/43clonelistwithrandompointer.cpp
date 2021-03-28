Q: Given Link List with Random Pointer, copy it.

Node* copyLL(Node* head){
    Node *newHead, *p1, *p2;
    p1 = head;

    while(p1){
       p2 = new Node(p1->val);
       Node* temp = p1->next;
       p1->next = p2;
       p2->next = temp;
       p1 = temp;
    }
    p1 = head;

    while(p1){
        p2=p1->random;
        if(p2){
            p1->next->random = p2->next;
        }
        p1 = p1->next->next;
    }
    p1 = head;
    p2 = newHead = p1->next;

    while(p2->next){
        p1->next = p2->next;
        p1 = p1->next;
        p2->next = p1->next;
        p2 = p2->next;
    }

    p1->next = NULL;
    return newHead;
}