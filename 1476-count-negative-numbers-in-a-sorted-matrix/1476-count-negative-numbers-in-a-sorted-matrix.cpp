class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n= grid.size(); //for rows
        int m= grid[0].size(); //for columns
        int ans=0, r=0, c=m-1;

        while(c>=0 && r<n){
            if(grid[r][c]>=0){
                r++;
            } else {
                ans = ans+(n-r);
                c--;
            }
        }
        return ans;
    }
};