class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        int maxlen = 1;
        int st = 0, end = 0, count = 0;

        //Odd length
        for(int i=0; i<n-1; i++){
            int l=i , r=i;
            while(l>=0 && r<n && s[l]==s[r]){
                l--;
                r++;
            }
            int len = r-l-1;
            if(len > maxlen){
                maxlen = len;
                st = l+1;
                end = r-1;
            }
        }
        //Even length
        for(int i=0; i<n-1; i++){
            int l=i , r=i+1;
            while(l>=0 && r<n && s[l]==s[r]){
                l--;
                r++;
            }
            int len = r-l-1;
            if(len > maxlen){
                maxlen = len;
                st = l+1;
                end = r-1;
            }
        }

        return s.substr(st,maxlen);
    }
};