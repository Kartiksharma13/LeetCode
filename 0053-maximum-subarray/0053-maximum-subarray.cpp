class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n= nums.size();
        int maxSum= nums[0], curr[n];
        curr[0] = nums[0];
        for(int i=1; i<n; i++){
            if(curr[i-1]>0){
                curr[i] = nums[i] + curr[i-1];
            }
            else{
                curr[i] = nums[i];
            }
            maxSum = max(maxSum,curr[i]);
        }
        return maxSum;
    }
};