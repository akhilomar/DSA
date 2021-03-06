Q: Given string, you need to find string of size k from given string such that it contains smallest alphabets not necessarily in order order.

string smallestString(string s, int k){
    int i;
    string ans = "";
    priority_queue<char, vector<char>, greater<char>> pq;
    for(i = 0; i < k; i++)
        pq.push(s[i]);
    while(!pq.empty()){
        ans+=pq.top();
        pq.pop();
        if(i < s.size()){
            pq.push(s[i]);
            i++;
        }
    }
    return ans;
}