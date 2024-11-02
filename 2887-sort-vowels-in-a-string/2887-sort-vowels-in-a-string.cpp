class Solution {
public:
    string sortVowels(string s) {
        vector<char> vow;

        for(int i=0; i<s.size(); i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||
               s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                vow.push_back(s[i]);
               }
        }
        sort(vow.begin(),vow.end());
        int pos = 0; //pointing at vowel's index position
        for(int i=0; i<s.size(); i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||
               s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                
                s[i] = vow[pos];
                pos++;
               }
        }
        return s;
    }
};