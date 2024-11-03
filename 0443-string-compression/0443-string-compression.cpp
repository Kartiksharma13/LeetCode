class Solution {
public:
    int compress(vector<char>& chars) {
        int readstr = 0, writestr = 0;
        int n = chars.size();
        while(readstr < n){
            int CountChar = 0;
            char currChar = chars[readstr]; 
            while(readstr<n && chars[readstr] == currChar){
                readstr++;
                CountChar++;
            }
            chars[writestr] = currChar;
            writestr++;
            if(CountChar > 1){
                string count = to_string(CountChar);
                for(int i=0; i<count.size(); i++){
                    chars[writestr++] = count[i];
                }
            }
        }
        return writestr;
    }
};