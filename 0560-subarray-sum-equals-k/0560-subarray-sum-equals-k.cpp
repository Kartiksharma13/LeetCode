class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n= nums.size();
        int count = 0;
        vector<int> prefsum(n,0);

        prefsum[0] = nums[0];
        for(int i=1; i<n; i++){
            prefsum[i] = prefsum[i-1] + nums[i];
        }

        unordered_map<int, int> mp; //prefix, freq 
        for(int j=0; j<n; j++){
            if(prefsum[j] == k) count++;

            int val = prefsum[j] - k;
            if(mp.find(val) != mp.end()){
                count += mp[val];
            }

            if(mp.find(prefsum[j]) == mp.end()){
                mp[prefsum[j]] = 0;
            }
            mp[prefsum[j]]++;
        }
        return count;
    }
};