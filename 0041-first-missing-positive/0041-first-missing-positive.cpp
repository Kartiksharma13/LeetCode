class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n= nums.size();
        vector<bool> seen(n+1,false);
        for(int i=0; i<n; i++){
            if(nums[i]>0 && nums[i]<=n){
                seen[nums[i]] = true;
            }
        }
        for(int i=1; i<=n; i++){
            if(seen[i] != true){
                return i;
            }
        }
        return n+1;
    }
};