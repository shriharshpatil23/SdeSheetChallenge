int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int x =  0;
	for(int i=1;i<n;i++){
		if(arr[x]!=arr[i]){
			x++;
			arr[x]=arr[i];
		}
	}
	return  x+1;
}