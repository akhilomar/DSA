Q: Implement pow(x,n) without using std libraries

#include<bits/stdc++.h>
using namespace std;

double Processor(x, n){
    double res = 1
     while(n){
         if(n&1)
            res*=x;
        x = x*x;
        n>>=1;
     }
     return res;
}

int main(void){
    int x,n;
    cin>>x>>n;
    bool denominator = false;
    if(n < 0)
        denominator = true;
    double ans = denominator ? 1/Processor(x, n):Processor(x, n);
    cout<<ans;
}

