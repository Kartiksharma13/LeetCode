class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n= nums.size();
        int ans = n-1;
        for(int i=n-1; i>=0; i--){
            if( i+nums[i] >= ans) { ans = i; }
        }
        if(ans == 0) return true;
        else return false;
    }
};