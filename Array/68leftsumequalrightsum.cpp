Q: Find Index Where left sum is equal to right sum

int LER(vector<int> a, int n){
    vector<int> Prefix(n);
    vector<int> Suffix(n);

    Prefix[0] = a[0];
    for(int i = 1; i < n; i++)
        Prefix[i] = Prefix[i - 1] + a[i];
    
    Suffix[n - 1] = a[n - 1];
    for(int i = n - 2; i >= 0; i--)
        Suffix[i] = Suffix[i+1] + a[i];

    for(int i = 1; i < n - 1; i++)
        if(Prefix[i] == Suffix[i])
            return i;
}