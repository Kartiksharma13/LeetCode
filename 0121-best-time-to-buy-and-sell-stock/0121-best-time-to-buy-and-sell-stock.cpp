class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        int profit= 0, minpro = INT_MAX;
        for(int i=0; i<n; i++){
            minpro= min(minpro,prices[i]);
            profit= max(profit,prices[i]-minpro);
        }
        return profit;
    }
};