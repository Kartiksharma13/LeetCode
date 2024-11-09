class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged;

        for(int i=0; i<nums1.size(); i++){
            merged.push_back(nums1[i]);
        }
        for(int i=0; i<nums2.size(); i++){
            merged.push_back(nums2[i]);
        }
        sort(merged.begin(),merged.end());
        
        int size = merged.size();
        if(size % 2 == 1){  //Odd length case
            return merged[size/2];
        }
        else{ //Even length case
            double mid1 = merged[size/2], mid2 = merged[size/2 -1];
            return (mid1+mid2)/2;
        }
    }
};