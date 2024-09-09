class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n= nums.size();
        unordered_map<int,int> freq;
        for(int i=0; i<n; i++){
            freq[nums[i]] +=1;
        
        if(freq[nums[i]]>n/2) {
            return nums[i];
        }
        }
        return{};
    }
};