class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n= nums.size();
        int r= n-1, l= 0; //r= right pointer l= left pointer
        for(int i=0; i<n; i++){
            if(nums[i]==0){
                swap(nums[l],nums[i]);
                l++;
            }
        }
        for(int i=n-1; i>=0; i--){
            if(nums[i]==2){
                swap(nums[r],nums[i]);
                r--;
            }
        }
    }
};