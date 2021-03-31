Q: Sort Array of 0 & 1


void Seggregation(vector<int> a){
    int start = 0;
    int end = a.size() - 1;
    while(start < end){
        if(a[start] == 1){
            swap(a[start], a[end]);
            end--;
        }
        else
            start++;
    }
} 