class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n= nums.size();
        int count1=0, count2=0, maj1=0, maj2=0;
        for(int i=0; i<n; i++){
            if(maj1==nums[i]){
                count1++;
            }
            else if(maj2==nums[i]){
                count2++;
            }
            else if(count1==0){
                maj1=nums[i];
                count1=1;
            }
            else if(count2==0){
                maj2=nums[i];
                count2=1;
            }
            else {
                count1-- , count2--;
            }
        }
        count1 =0, count2 =0;
        for(int i=0; i<n; i++){
            if(nums[i]==maj1) { count1++; }
            else if(nums[i]==maj2) { count2++; }
        }
        vector<int> ans;
        if(count1>n/3) { ans.push_back(maj1); }
        if(count2>n/3) { ans.push_back(maj2); }
        return ans;
    }
};