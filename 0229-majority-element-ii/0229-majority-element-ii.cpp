class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        vector<int> ans;
        int n= nums.size();
        for(int i=0; i<n; i++){
            freq[nums[i]] +=1;

            if(freq[nums[i]]>n/3){
                if(find(ans.begin(),ans.end(),nums[i]) == ans.end())
                { ans.push_back(nums[i]); }
            }
        }
        return ans;
    }
};