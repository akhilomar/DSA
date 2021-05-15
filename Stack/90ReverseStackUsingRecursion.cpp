Q: Reverse stack without using another stack or using recursion (backtracking)

#include<bits/stdc++.h>
stack<int> st;

void insert_at_bottom(int x) //backtracking
{
    if(st.empty())
        st.push(x);
    else{
        int a = st.top();
        st.pop();
        inset_at_bottom(x);
        st.push(a);         //part of backtrack
    }
}

void reverse() //recursion
{
    if(st.size() > 0){
        int x = st.top();
        st.pop();
        reverse();
        insert_at_bottom(x);        //do not think the functionality just assume insert function will insert at bottom directly
    }
    else
        return;
}