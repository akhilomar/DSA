Q: Rotate Doubly Link List by N times

void Rotate(Node** head, int N){
    if(N == 0)
        return;
    int count = 1;
    Node* cur = (*head);
    while(count < N && cur){
        count++;
        cur = cur->next;
    }
    if(!head)
        return;
    Node* nth = cur;
    while(cur -> next){
        cur = cur->next;
    }
    cur->next = (*head);
    (*head)->prev = cur;
    (*head) = nth->next;
    (*head)->prev= NULL;
    nth->next = NULL;
}