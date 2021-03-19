Q: Check wether all parentheses mathed with each other or not

bool matchParentheses(string s){
    stack<char> st;
    for(int i = 0; i < s.size(); i++){
        if(st[i] == '(' || st[i] == '[' || st[i] == '{')
            st.push(s[i]);
        else if(!st.empty()){
            if(s[i] == ')' && st.top() == '(')
                st.pop();
            else if(s[i] == ']' && st.top() == '[')
                st.pop();
            else if(s[i] == '}' && st.top() == '{')
                st.pop();
            else
                return false;
        }
    }
    return st.empty() ? true: false;
}