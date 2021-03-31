Q: Given 2D matrix, Find row with max number of 1s

int maxonerow(vector<vectotr<int>> a){
    int mindex, max = INT_MIN;
    for(int i = 0; i < a.size(); i++){
        int index = first(a[i], 0, a.size() - 1);
        if(index != -1 && a.size() - 1 - index > max)
            max = a.size() - 1 - index;
            mindex = i;
    }
    return mindex;
} 


int first(vector<int> mat, int low, int high){
    int m = low + (high - low)/2;
    if(m == 0 || mat[m] == 1 && mat[m - 1] == 0)        //m == 0 because if low+high/2 is zero then there should be one element
        return m;
    else if(mat[m] == 0)
        return first(mat, m+1, high);
    else
        return first(mat, low, m - 1);
}