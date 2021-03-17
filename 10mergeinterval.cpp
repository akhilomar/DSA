
//--Without Stack --//

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](vector<int> a, vector<int> b){
            return a[0] < b[0];
        });
        auto c = intervals[0];
        vector<vector<int>> ans;
        for(int i = 1; i < intervals.size(); i++){
            if(c[1] >= intervals[i][0])
                c[1] = max(c[1], intervals[i][1]);
            else{
                ans.push_back(c);
                c = intervals[i];
            }            
        }
        ans.push_back(c);
        return ans;
    }
};

//--Using Stack--//
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](vector<int> a, vector<int> b){
            return a[0] < b[0];
        });
        stack<int> s1;
        stack<int> s2;
        s1.push(intervals[0][0]);
        s2.push(intervals[0][1]);
        for(int i = 1; i < intervals.size(); i++){
            if(intervals[i][0] <= s2.top()){
                intervals[i][0] = min(s1.top(), intervals[i][0]);
                intervals[i][1] = max(s2.top(), intervals[i][1]);
                s1.pop();
                s2.pop();
            }
            s1.push(intervals[i][0]);
            s2.push(intervals[i][1]);
        }
        vector<vector<int>> ans;
        vector<int> a(2);
        while(!s2.empty()){
            a[0] = s1.top();
            a[1] = s2.top();
            s1.pop();
            s2.pop();
            ans.push_back(a);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};