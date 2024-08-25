class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        int r=n-1 , l=0 ; // r= right, l= left
        vector<int> ans(n);
        for(int i=0; i<n; i++){
            if(nums[i]%2==0){
                ans[l] = nums[i];
                l++;
            } 
            else{ ans[r] = nums[i];
            r--;
            }
        } return ans;
    }
};