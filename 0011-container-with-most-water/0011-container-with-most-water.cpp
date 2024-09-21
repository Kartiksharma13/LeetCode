class Solution {
public:
    int maxArea(vector<int>& height) {
        int n= height.size();
        int container = 0;
        int left = 0, right = n-1;
        while(left<=right){
            int water = min(height[left],height[right])* (right-left);
            container = max(container,water);

        if(height[left]<height[right]){
            left++;
        }
        else { right--; }
        }
        return container;
    }
};