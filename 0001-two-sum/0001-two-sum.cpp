class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();
        unordered_map<int , int> nmap;

        for(int i=0; i<n; i++){
            int remaining = target - nums[i];
            if(nmap.find(remaining)!= nmap.end()){
                return{nmap[remaining],i};
            }
            nmap[nums[i]] = i;
        }
        return{};
    }
};