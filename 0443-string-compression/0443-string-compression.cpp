class Solution {
public:
    int compress(vector<char>& chars) {
        int idx = 0, cnt = 1, i = 0;
        int n = chars.size();

        for (i = 1; i < n; i++) {
            if (chars[i] == chars[i - 1]) {
                cnt++;
            } else {
                chars[idx++] = chars[i - 1];
                if (cnt > 1) {
                    for (char c : to_string(cnt)) {
                        chars[idx++] = c;
                    }
                }
                cnt = 1;
            }
        }

        chars[idx++] = chars[i - 1];  // Add the last character
        if (cnt > 1) {
            for (char c : to_string(cnt)) {
                chars[idx++] = c;
            }
        }

        return idx;
    }
};