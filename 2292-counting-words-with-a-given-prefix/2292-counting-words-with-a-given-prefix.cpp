class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        const int sz = pref.length();
        int cnt = 0;
        
        for (string& word: words) {
            if(word.substr(0, sz) == pref) cnt++;
        }

        return cnt;
    }
};