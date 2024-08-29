class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n= matrix.size();
        int m= matrix[0].size();
        vector<vector<int>> copy = matrix; //extra matrix

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j]==0){
                    for(int k=0; k<m; k++) //entire row=0 in exrta matrix
                    {
                        copy[i][k]=0;
                    }
                    for(int k=0; k<n; k++)  //entire column=0 
                    {
                        copy[k][j]=0;
                    }
                }
            }
        } matrix = copy; 
    }
};