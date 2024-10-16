class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();

        for(int i=0; i<n; i++){
            while(arr[i]<arr[i+1]){
                i++;
            }
            return i;
        }
        return -1;
    }
};