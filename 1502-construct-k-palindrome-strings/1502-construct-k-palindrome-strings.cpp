class Solution {
public:
    bool canConstruct(string s, int k) {
        if (s.size() < k) return false;

        int freq[26] = {};

        for (char& c: s){
            freq[c-'a']++;
        }

        int cnt = 0;
        for (int& v: freq){
            if (v % 2 == 1) {
                cnt++;
                if(cnt > k){
                    return false;
                }
            }
        }
        return true;
    }
};