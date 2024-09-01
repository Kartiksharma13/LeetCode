class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n= nums.size();
        int maxSum= nums[0];
        int currsum =nums[0];
        for(int i=1; i<n; i++){
            currsum = max(nums[i], currsum +nums[i]);
            maxSum = max(currsum, maxSum);
        }
        return maxSum;
    }
};