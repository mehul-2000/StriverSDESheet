#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
    pair<int,int> res;
	for(int i=0;i<n;i++){
        if(arr[abs(arr[i])-1]>0){
            arr[abs(arr[i])-1] = -arr[abs(arr[i])-1];
        }else{
            res.second = abs(arr[i]);
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            res.first = i+1;
        }
    }
    return res;
}
