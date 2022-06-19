#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	// Write your code here.
	int cnt = 1;
	int tmp = arr[0];
	for(int i=1;i<n;i++){
		if(tmp==arr[i]){
			cnt++;
		}
		else{
			cnt--;
		}	
		
		if(cnt ==0){
			tmp = arr[i];
			cnt = 1;
		}
	}	
	cnt = 0;
		for(int i=0;i<n;i++){
			if(tmp==arr[i])	cnt++;
		}
		if(cnt>n/2){
			return tmp;
		}else	return -1;
		
	
}