class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.size()-1, j = num2.size()-1;
        int c = 0;
        string ans;
        while(i>=0 || j>=0 || c>0){
            int sum = c;
            if(i>=0){
                sum += num1[i] - '0';
                i--;
            }
            if(j>=0){
                sum += num2[j] - '0';
                j--;
            }
            c = sum/10;
            char ch = sum%10 + '0';
            ans += ch ;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};