class Solution {
public:
    int appendCharacters(string s, string t) {
        
        int j = 0;

        for(int i = 0; i < s.size(); i++) {
            if(j < t.size() && s[i] == t[j]){
                j++;
            }
        }
        return t.size() - j;
    }
};