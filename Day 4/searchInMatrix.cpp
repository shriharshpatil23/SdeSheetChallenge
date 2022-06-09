#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & matrix, int m, int n, int target) {
    // Write your code here.
    int i=0;
    int j=n-1;
    while(i<m && j>=0){
        if(matrix[i][j]==target)    return true;
        
        if(matrix[i][j]>target)    j--;
        else    i++;
    }
    return false;
}