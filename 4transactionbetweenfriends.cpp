#include<bits/stdc++.h>
using namespace std;

void cashflow(vector<int> amount){
    int mx = distance(amount.begin(), max_element(amount.begin(), amount.end())); //gives index of maximum in amount
    int mn = distance(amount.begin(), min_element(amount.begin(), amount.end())); //gives index of minimum
    if(amount[mx] == 0 && amount[mn] == 0)    //recursion breaking condition
        return;
    int sub = min(-amount[mn], amount[mx]);
    amount[mx]-=sub;    //because sub is in minus so should be add in credit
    amount[mn]+=sub;
    cout<<"Person "<<mn<<" givers "<<sub<<" to person "<<mn<<endl;
    cashflow(amount);
}

int main(void){
    vector<vector<int>> a = {
        {0, 1000, 2000},
        {0, 0, 5000},
        {0, 0, 0}
    };
    vector<int> amount(a.size(), 0);
    
    for(int i = 0; i < a.size(); i++)
        for(int j = 0; j < a.size(); j++)
            amount[i]+=a[j][i] - a[i][j];   //it will maintain total amount after all transaction of person i
    cashflow(amount);
}