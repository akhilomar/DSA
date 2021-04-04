Q: Sort Given Link List according to give array

Given array : 5, 1, 3, 2, 8
Given LL: 3->2->5->8->5->2->1
sorted list: 5->5->1->3->2->2->8->NULL


void SortLL(Node* root, vector<int> a){
    unordered_map<int, int> m;
    Node* temp = root;
    while(temp){
        m[temp->val]++;
        temp = temp->next;
    }

    temp = root, int i = 0;
    while(temp){
        int n = m[a[i]];
        while(n--){
            temp->val = a[i]
            temp = temp->next;
        }
        i++;
    }
}