class Solution {
public:
    bool canConstruct(string ran, string mag) {
        int r[26] = {}, m[26];

        for (int i = 0; i < ran.size(); i++) {
            r[ran[i] - 'a']++;
        }
        for (int i = 0; i < mag.size(); i++) {
            m[mag[i] - 'a']++;
        }

        for (int i = 0; i < 26; i++) {
            if (r[i] > m[i]) return false;
        }

        return true;
    }
};