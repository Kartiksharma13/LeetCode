class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int n= piles.size();
        vector<vector<int>> dp(n,vector<int> (n,0));

        for(int i=0; i<n; i++){
            dp[i][i] = piles[i];
        }
        for(int len=1; len<n; len++){
            for(int i=0; i<n-len; i++){
                int j = i+len;
                dp[i][j] = max(piles[i]-dp[i+1][j] , piles[j]-dp[i][j-1]);
            }
        }
        if(dp[0][n-1] > 0){
            return true;
        }
        else {
            return false;
        }
    }
};