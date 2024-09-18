class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n= nums.size();

        int sum=0; //Total Sum
        for(int i=0; i<n; i++){
            sum +=nums[i];
        }
        int cs=0; //Cummilative Sum
        for(int i=0; i<n; i++){
            int ls = cs; //left sum
            int rs = sum-cs-nums[i]; //Right Sum
            if(ls==rs){
                return i;
            }
            cs += nums[i];
        }
        return -1;
    }
};