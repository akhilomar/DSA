Q: Find range of majority element in array

With Hashmap O(n) TC & O(n) SC 
Booyers Moore Algo O(n) TC & O(1) SC

void ME(vector<int> a){
    int m;
    int i = 0;
    for(int j = 0; j < a.size(); j++){
        if(i == 0){
            i = 1;
            m = a[j];
        }
        else{
            m == a[j] ? i++ : i--;
        }
    }

    i = 0;
    for(auto it : a){
        if(it == m)
            i++;
    }
    if(i > a.size())
        cout<<m;
    else    
        cout<<"No element";
}

