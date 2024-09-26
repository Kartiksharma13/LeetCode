class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int i = n-1, length = 0;
        while(s[i] == ' '){
            i--;
        }
        while(i>=0 && s[i] != ' '){
            length++;
            i--;
        }
        return length;
    }
};