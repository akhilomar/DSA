Q: Reverse Individual words

string: "This is pied piper"
ans: "siht si deip repip"

string reverse(string a){
    string ans = "";
    stack<int> s;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != " ")
            s.push(a[i]);
        else{
            while(!s.empty()){
                ans+=s.top();
                s.pop();
            }
            ans+=" ";
        }
    }

    while(!s.empty()){
        ans+= s.top();
        s.pop();
    }
    return ans;
}