class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //Logic
        //We need to find out transpose of the Matrix and then do the mirror imaging about centre column
        
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<=i;j++){
                if(i!=j){
                    swap(matrix[i][j],matrix[j][i]);
                }
            }
        }
        
        
        int s=0,e = matrix[0].size()-1;
        while(s<e){
            for(int i=0;i<matrix.size();i++){
                swap(matrix[i][s],matrix[i][e]);
            }
            s++;
            e--;
        }
    }
};