Q: Find missing number in an array

int missing(vector<int> a){
    int res = 0;
    for(int i = 0; i < a.size(); i++){
        res = res^a[i]^i;
    }
    return res^a.size();
}