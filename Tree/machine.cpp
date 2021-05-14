#include <bits/stdc++.h>
using namespace std;

int main(void) {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    float getpp,getch;
	string purgetchaseAmt="",cash="";
	bool getchh=false;

	string s;
	cin>>s;
	
	for(int z = 0; z < s.size(); z++)
	{
	    if(s[z]==';')
	    {
	        getchh=true;
	        continue;
	    }
	    if(!getchh)
	    {purgetchaseAmt+=s[z];
	    continue;
	        
	    }
	    if(getchh)
	    {
	        cash+=s[z];
	    }
	}


	getpp=stof(purgetchaseAmt);
	getch=stof(cash);

	vector<pair<float,string>>moneyArr ;
    moneyArr.push_back(make_pair(0.50,"HALF DOLLAR"));

	moneyArr.push_back(make_pair(0.25,"QUARTER"));

	moneyArr.push_back(make_pair(0.10,"DIME"));

	moneyArr.push_back(make_pair(0.05,"NICKEL"));

	moneyArr.push_back(make_pair(0.01,"PENNY"));

	moneyArr.push_back(make_pair(100.00,"ONE HUNDRED"));

	moneyArr.push_back(make_pair(50.00,"FIFTY"));

	moneyArr.push_back(make_pair(20.00,"TWENTY"));

	moneyArr.push_back(make_pair(10.00,"TEN"));

	moneyArr.push_back(make_pair(5.00,"FIVE"));

	moneyArr.push_back(make_pair(2.00,"TWO"));

	moneyArr.push_back(make_pair(1.00,"ONE"));
	
	vector<string>res;
	float diff=getch-getpp;

    if(diff<0)
	{
	    cout<<"ERROR";
	    return 0;
	}

	if(diff==0)
	{
	    cout<<"ZERO";
	    return 0;
	}
	
	
	for(int i=0; i<moneyArr.size();i++)
	{
	    long long int op=int(diff/moneyArr[i].first);
	    while(op>0)
	    {
	        res.push_back(moneyArr[i].second);
	        op--;
	        diff-=moneyArr[i].first;
	    }
	    
	}
	sort(res.begin(),res.end());
	for(int i=0;i<res.size()-1;i++)
	cout<<res[i]<<",";
	cout<<res[res.size()-1];
}[]