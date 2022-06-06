#include <bits/stdc++.h> 

int t[16][16];
int helper(int i, int j){
    if(i<0 || j<0)    return 0;
    
    if(i==0 && j==0){
        return 1;
    }   
    
    if(t[i][j]!= -1)    return t[i][j];
    
    //up
    int up = helper(i-1,j);
    //left
    int left = helper(i,j-1);
    
    return t[i][j]=up+left; 
}

int uniquePaths(int m, int n) {
	// Write your code here.
    memset(t,-1,sizeof(t));
    return helper(m-1,n-1);
       
}