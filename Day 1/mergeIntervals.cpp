#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    vector<vector<int>> ans;
    sort(intervals.begin(),intervals.end());
    ans.push_back(intervals[0]);
    for(int i=1;i<intervals.size();i++){
        if(intervals[i][0] <= ans.back()[1]){
            ans.back()[1] = max(intervals[i][1],ans.back()[1]);
        }else{
            ans.push_back(intervals[i]);
        }
    }
    return ans;
}
