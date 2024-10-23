class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        stack<string> st;
        string str = "";
        for(int i=0; i<s.size(); i++){
            if(s[i]==' '){
                if(str.size() != 0){
                  st.push(str);
                  str = "";
                }
            }
            else {
                str += s[i];
            }
        }
        if(str.size() != 0){ //To add the last element
            st.push(str);
        }

        string ans ="";
        while(st.size() != 1){
            ans = ans + st.top() + " ";
            st.pop();
        }
        ans = ans + st.top();

        return ans;
    }
};