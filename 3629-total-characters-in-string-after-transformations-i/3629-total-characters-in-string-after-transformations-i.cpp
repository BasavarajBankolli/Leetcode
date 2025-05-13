class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
        const int mod = 1e9+7;
        long long a[26] = {0};

        for (char c: s) {
            a[c - 'a']++;
        }

        for (int _ = 0; _ < t; _++) {
            long long tmp[26] = {0};
            for (int i = 0; i < 25; i++) {
                tmp[i + 1] = (tmp[i + 1] + a[i]) % mod;
            }
            tmp[0] = (tmp[0] + a[25]) % mod;
            tmp[1] = (tmp[1] + a[25]) % mod;

            for (int i = 0; i < 26; i++) {
                a[i] = tmp[i];
            }
        }

        int res = 0;
        for (int i = 0; i < 26; i++) {
            res = (res + a[i]) % mod;
        }

        return res;
    }
};