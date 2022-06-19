#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    sort(arr.begin(),arr.end());
    int cnt = 0;
    int ans = 0;
    for(int i=1;i<n;i++){
        if(arr[i] == arr[i-1] + 1){
            cnt ++;
            ans = max(ans,cnt);
        }else    if(arr[i]==arr[i-1]){
            continue;
        }else{
            cnt = 0;
        }
    }
    return ans+1;
}