class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1){
            return s;
        }
        vector<string> ans(numRows);

        int curr = 0;
        bool down = false; //points whether to go down or up
        for(int i=0; i<s.size(); i++){
            ans[curr] += s[i];
            if(curr == 0 || curr == numRows-1){
                down = !down;
            }
            if(down){
                curr++;
            }
            else {
                curr--;
            }
        }
        string result = "";
        for(int i=0; i<ans.size(); i++){
            result += ans[i];
        }
        return result;
    }
};