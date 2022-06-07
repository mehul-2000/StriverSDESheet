#define ll long long
ll merge(ll* arr,ll start,ll mid,ll end,ll* temp){
    
    ll i=start,j=mid,k=start,inv_cnt=0;
    while(i<mid && j<=end){
        if(arr[i]<=arr[j]){
            temp[k++] = arr[i++];
        }else{
            temp[k++] = arr[j++];
            inv_cnt+=(mid-i);
        }
    }
    while(i<mid){
        temp[k++] = arr[i++];
    }
    while(j<=end){
        temp[k++] = arr[j++];
    }
    for(int i=start;i<=end;i++){
        arr[i] = temp[i];
    }
    return inv_cnt;
//     ll i=start,j=mid,k=start,inv_cnt=0;
//     while(i<mid && j<=end){
//         if(arr[i]<=arr[j]){
//            temp[k++]=arr[i++];
//         }
//         else{
//             temp[k++]=arr[j++];
//             inv_cnt+=(mid-i);
//         }
//     }
//     while(i<mid){
//         temp[k++]=arr[i++];
//     }
//     while(j<=end){
//         temp[k++]=arr[j++];
//     }
//     for(int i=start;i<=end;i++)
//         arr[i]=temp[i];
    
//     return inv_cnt;
}

long long mergeSort(long long* arr,ll start,ll end,ll* temp){
    ll inv_cnt=0;
    if(start<end){
        ll mid = (start+end)/2;
        inv_cnt+=mergeSort(arr,start,mid,temp);
        inv_cnt+=mergeSort(arr,mid+1,end,temp);
        inv_cnt+=merge(arr,start,mid+1,end,temp);
    }
    return inv_cnt;
}
long long getInversions(long long *arr, int n){
    // Write your code here.
    long long temp[n];
    return mergeSort(arr,0,n-1,temp);
}