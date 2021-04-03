Q: Insertion Sort

void selectionsort(vector<int>& a){
    for(int i = 1; i < a.size(); i++){
        int key = a[i];
        int j = i - 1;
        while(j >= 0 && key < a[j]){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}