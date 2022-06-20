#include <bits/stdc++.h> 
string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.
    string ans ="No";
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        int target1 = target - arr[i];
        for(int j=i+1;j<n;j++){
            int target2 = target1 - arr[j];
            int start = j+1;
            int end = n-1;
            int mid ;
            while(start < end){
                if(arr[start] + arr[end] == target2){
                    ans = "Yes";
                    break;
                }else    if(arr[start] + arr[end] > target2){
                    end--;
                }else{
                    start++;
                }
            }
        }
    }
    return ans;
}    
