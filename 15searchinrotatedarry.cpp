 int searchinrotatedarrayinsinglepass(vector<int> a, int target){
     int l = 0, e = a.size();
     while(l < e){
         int m = l + (e - l)/2;
         if(a[m] == target)
            return m;
        else if(a[l] <= a[m] && a[m] < target || a[m] < target && target < a[l] || target < a[l] && a[l] <= a[m])
            l = m+1;
        else 
            e = m;
     }
     return -1;
 }


 learning condition:

 LMT
 MTL
 TLM