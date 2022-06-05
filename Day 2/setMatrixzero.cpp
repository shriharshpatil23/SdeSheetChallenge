#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
    unordered_set<int> row;
    unordered_set<int> col;
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            if(matrix[i][j]==0){
                row.insert(i);
                col.insert(j);
            }
        }
    }
    for(auto x : row){
        for(int j=0;j<matrix[0].size();j++){
            matrix[x][j]=0;
        }
    }
    for(auto y : col){
        for(int i=0;i<matrix.size();i++){
            matrix[i][y]=0;
        }
    }
    
}