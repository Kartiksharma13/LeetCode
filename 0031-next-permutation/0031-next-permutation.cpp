class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n= nums.size();
        if(n==1) return;
        int idx1;
        for(int i=n-2; i>=0; i--){
            if(nums[i]<nums[i+1]){
                idx1=i;
                break;
            }
        }
        if(idx1<0){ 
            reverse(nums.begin(), nums.end());
            return; }

        int idx2=0;
        for(int i=n-1; i>=0; i--){
            if(nums[i]>nums[idx1]){
                idx2=i;
                break;
            }
        }
        swap(nums[idx1],nums[idx2]);
        reverse(nums.begin()+idx1+1,nums.end()); 
    }
};