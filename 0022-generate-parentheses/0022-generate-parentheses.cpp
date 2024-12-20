class Solution {
public:
    //only add open(oc) parentheses if less than n
    //only add close(cc) parentheses if less than open
    //if oc==n and cc==n end
    void generate(vector<string> &ans, int n, int oc, int cc, string s){
        if(oc == n && cc == n){
            ans.push_back(s);
            return;
        }
        if(oc < n){
            generate(ans, n, oc+1, cc , s+"(");
        }
        if(cc < oc){
            generate(ans, n, oc, cc+1, s+")");
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s = "";
        int oc = 0, cc = 0;
        generate(ans, n, oc, cc, s);
        return ans;
    }
};