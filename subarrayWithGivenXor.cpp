int Solution::solve(vector<int> &A, int B) {
    map<int,int> freq;
    int cnt=0,xorn=0;
  
    for(int i=0;i<A.size();i++){
        xorn^=A[i];


        if(xorn==B)cnt++;

        if(freq.find(xorn^B)!=freq.end()){
            cnt+=freq[xorn^B];
        }
        freq[xorn]++;
    }
    return cnt;
}
