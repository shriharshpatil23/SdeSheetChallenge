#include <bits/stdc++.h> 
int subarraysXor(vector<int> &A, int B)
{
    int n = A.size();
    int ans = 0;
    int X = 0;
    map<int,int> m;
    m[0]=1;
    for(int i=0;i<n;i++){
        X = X^A[i];
        if(m.find(X^B)!=m.end()){
            ans += m[X^B];
        }
        m[X]++;
    }
    return ans;


}