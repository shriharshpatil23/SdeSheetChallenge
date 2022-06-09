#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
    pair<int,int> ans;
    vector<int> freq(n+1,0);
    for(auto x : arr){
        freq[x]++;
    }
    int repeat;
    int missing;
    for(int i=1;i<=n;i++){
        if(freq[i]==0)    missing = i;
        
        if(freq[i]>1)    repeat = i;
    }
    return {missing,repeat};
}
