class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0, count = 0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]==1){
                count++;
            }
            else{
                count = 0;
            }
            maxi = max(maxi,count);
        }
        return maxi;
    }
};