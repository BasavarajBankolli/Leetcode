class Solution {
public:
    bool closeStrings(string w1, string w2) {
        if (w1.size() != w2.size()) return false;
        
        int ref1[26] = {0}, ref2[26] = {0};
        for(int i = 0; i < w1.size(); i++){
            ref1[w1[i]-'a']++; ref2[w2[i]-'a']++;
        }

        for(int i = 0; i < 26; i++) {
            if (!ref1[i]) continue;
            int cnt = ref1[i]; bool ok = 0;
            for (int j = 0; j < 26; j++) {
                if (cnt == ref2[j] && ref1[j]) {
                    ref2[j] = 0;
                    ok = 1;
                    break;
                }
            }
            if (!ok) return false;
        }
        return true;

    }
};