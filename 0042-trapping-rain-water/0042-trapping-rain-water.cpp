class Solution {
public:
    int trap(vector<int>& height) {
        int n= height.size();
        int prefixsum[n], suffixsum[n];
        prefixsum[0] = height[0];
        for(int i=1; i<n; i++){
            prefixsum[i]= max(prefixsum[i-1],height[i]);
        }
        suffixsum[n-1] = height[n-1];
        for(int i=n-2; i>=0; i--){
            suffixsum[i]= max(suffixsum[i+1],height[i]);
        }
        int water = 0;
        for(int i=0; i<n; i++){
            water += min(prefixsum[i],suffixsum[i]) - height[i];
        }
        return water;
    }
};