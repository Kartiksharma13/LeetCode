class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n= matrix.size();
        int m=matrix[0].size();
        int rowbegin = 0, colend = m-1;
        int rowend = n-1, colbegin = 0;
        vector<int> ans;

        while(colbegin<=colend && rowbegin<=rowend){
            //right
            for(int j=colbegin; j<=colend; j++){
                ans.push_back(matrix[rowbegin][j]);
            }rowbegin++;
            //bottom
            for(int i=rowbegin; i<=rowend; i++){
                ans.push_back(matrix[i][colend]);
            }colend--;
            //left
            if(rowbegin<=rowend){
                for(int j=colend; j>=colbegin; j--){
                    ans.push_back(matrix[rowend][j]);
                }rowend--;
            }
            //up
            if(colbegin<=colend){
                for(int i=rowend; i>=rowbegin; i--){
                    ans.push_back(matrix[i][colbegin]);
                }colbegin++;
            }
        }
        return ans;
    }
};