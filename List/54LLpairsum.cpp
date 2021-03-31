Q: Given a LL, find number of pairs such that sum of pair is equal to given sum

0 -> 2 -> 5 -> 7 -> 4 -> 6 -> 10 -> 20 -> -10 -> NULL
sum = 10
o/p: 3 // (4,6), (0, 10), (20, -10)

int LLPS(Node* head, int sum){
    unordered_map<int, int> m;
    int c = 0;
    while(head){
        int temp = sum - head->val;
        if(m.find(temp) != m.end())
            c++;
        m[head->val]++;
        head = head -> next;
    }
    return head;
}