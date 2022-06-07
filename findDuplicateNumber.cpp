int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
    int low = 0,high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        int cnt=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=mid)cnt++;
        }
        
        if(cnt<=mid)
            low = mid+1;
        else
            high = mid-1;
    }
    return low;
}
