class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.length()<s1.length()){
            return false;
        }
        vector<int> s1freq(26,0), s2freq(26,0);

        for(int i=0; i<s1.length(); i++){
            s1freq[s1[i] - 'a']++;
            s2freq[s2[i] - 'a']++;
        }
        for(int i=0; i<s2.length() - s1.length(); i++){
            if(s1freq == s2freq) return true;
            s2freq[s2[i] - 'a']--;
            s2freq[s2[i + s1.length()] - 'a']++;
        }
        if(s1freq == s2freq){ //to check the last window
            return true;
        }
        return false;
    }
};