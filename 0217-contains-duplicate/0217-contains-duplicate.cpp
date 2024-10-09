class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> mp(nums.begin(),nums.end());
        int n = nums.size();
        int m = mp.size();
        if(n == m) return false;
        else return true;
    }
};