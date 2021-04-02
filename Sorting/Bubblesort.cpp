Q: Bubble Sort

void BubbleSort(vector<int>& a){
    for(int i = 0; i < a.size() - 1; i++){
        for(int j = 0; j < a.size() - i - 1; j++){
            if(a[j] > a[j + 1])
                swap(a[j], a[j+1])
        }
    }
}

It is Sorting from end
assume it as bubble sorting in increasing order