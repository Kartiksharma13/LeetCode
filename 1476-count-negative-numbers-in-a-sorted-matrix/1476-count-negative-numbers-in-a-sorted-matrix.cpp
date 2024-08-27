class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n= grid.size(); //for rows
        int m= grid[0].size(); //for columns
        int ans=0; 
        
        for(int i=0; i<n; i++){
            int index = upper_bound(begin(grid[i]),end(grid[i]),0,greater<int>())-begin(grid[i]);
                ans = ans+(m-index);
        }
        return ans;
    }
};