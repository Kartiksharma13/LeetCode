class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n= s.size();
        int count[256]={0}, i=0, j=0;
        int ans=0;
        while(j<n){
            count[s[j]]++;
            while(count[s[j]]>1){
                count[s[i]]--;
                i++;
            }
            ans= max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};