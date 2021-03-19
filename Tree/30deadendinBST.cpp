Q: Dead end in bst i.e we are not able to inset node

bool deadEnd(Node* head){
    return Processor(head, INT_MIN, INT_MAX);
}

bool Processor(Node* head, int min, int max){
    if(!head)
        return false;
    if(min == max)
        return true;
    return Processor(head->left, min, head->val) || Processor(head->right, head->val, max)
}