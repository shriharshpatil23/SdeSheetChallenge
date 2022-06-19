#include <bits/stdc++.h> 
int cnt;

void mergeCount(vector<int> &arr, int start , int mid, int end){
    int l = start ;
    int r = mid + 1;
    while(l<= mid && r <= end){
        if(arr[l] > 2*arr[r]){
            cnt += (mid - l + 1);
            r++;
        }else{
            l++;
        }
    }
    sort(arr.begin()+start,arr.begin()+end+1);
    return;
}

void mergeSort(vector<int> &arr, int start , int end){
    if(start == end)    return ;    //base case
    
    int mid = (end + start)/2;
    
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    
    mergeCount(arr,start,mid,end);
    return;
}

int reversePairs(vector<int> &arr, int n){
	// Write your code here.	
    cnt = 0;
    mergeSort(arr,0,n-1);
    return cnt;
}