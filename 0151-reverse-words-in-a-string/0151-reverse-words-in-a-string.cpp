class Solution {
public:
    string reverseWords(string s) {
        int n = s.size(), i=0;
        string temp ="", ans = "";
        while(i<n){
            if(s[i] != ' '){
                temp += s[i];
            }
            else if(temp != ""){
                if(ans != ""){
                    ans = temp + " " + ans;
                }
                else{
                    ans = temp;
                }
                temp = "" ;
            }
            i++;
        }
        //for checking the last word because there is no space after last word
        if(temp != ""){
            if(ans != ""){
                ans = temp+ " " +ans;
            }
            else {
                ans = temp;
            }
        }
        return ans;
    }
};