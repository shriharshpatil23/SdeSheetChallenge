#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
    vector<int> ans;
    for(auto x : arr1){
        if(x !=0)    ans.push_back(x);
    }
    for(auto x : arr2){
        if(x !=0)    ans.push_back(x);
    }
    sort(ans.begin(),ans.end());
    return ans;
}