#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
    int z=0;
    int o=0;
    int t=n-1;
    while(o<=t){
        if(arr[o]==0){
            swap(arr[o],arr[z]);
            z++;
            o++;
        }else    if(arr[o]==1)    o++;
        else{
            swap(arr[o],arr[t]);
                t--;
         }
    }
    return;
}