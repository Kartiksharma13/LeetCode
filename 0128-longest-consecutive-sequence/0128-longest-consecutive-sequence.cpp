class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n= nums.size();
        unordered_set<int> set;
        for(int i=0; i<n; i++){ //Insert all elements in set
            set.insert(nums[i]);
        }
        int ans=0;
        for(int i=0; i<n; i++){
            if(set.find(nums[i]-1) == set.end()){ //only check the number if it is lowest in set i.e, skip if the previous number is present in set
                int count=0;
                int current = nums[i];
                while(set.find(current)!=set.end()){ //increment lowest until the next is present in set to find the longest consecutive sequence
                    count++, current++;
                }
                ans= max(ans,count);
            }
        }
        return ans;
    }
};