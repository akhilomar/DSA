Q: Given array consist of only 1,2 & 3. Sort it in O(n) or less.

void SortZOT(vector<int>& a){
    int low = 0, high = a.size();
    int m = 0;
    while(mid <= high){
        switch(a[mid]){
        case 0:
            swap(a[mid], a[low]);
            low++;
            mid++;
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(a[mid], a[high]);
            high--;
            break; //not mid++ becauase we need rechek again the swapped number
        }
    }
}

