Q: Selection Sort

void Selectionsort(vector<int> a){
    for(int i = 0; i < a.size() - 1; i++){
        int min = i;
        for(int j = i+1; j < a.size(); j++){
            if(a[j] < a[min])
                min = j;
        }
        swap(a[min], a[i]);
    }
}