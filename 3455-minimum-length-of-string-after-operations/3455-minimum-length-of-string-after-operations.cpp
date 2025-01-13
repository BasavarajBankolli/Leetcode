class Solution {
public:
    int minimumLength(const string& s) {
        if (s.length() < 3) {
            return s.length();
        }

        int counter[26] = {};
        for (char c : s) {
            counter[c-'a']++;
        }

        int l = 0;
        for (const auto& val:counter) {
            if (val > 3 && val % 2 == 0) {
                l += 2;
            } else if (val >= 3 && val % 2 == 1) {
                l += 1;
            } else {
                l += val;
            }
        }

        return l;
    }

};