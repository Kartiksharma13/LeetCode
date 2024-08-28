class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();
        vector<pair<int,int>> nindex;
        for(int i=0; i<n; i++){
            nindex.push_back({nums[i],i});
        }
        sort(nindex.begin(),nindex.end());

        int left=0, right=nindex.size()-1; //two pointers
        while(left<right){
            int sum = nindex[left].first + nindex[right].first;
            if(sum == target){
                return{nindex[left].second,nindex[right].second};
            }
            else if(sum<target){
                left++;
            } else right--;
        }
        return{};
    }
};