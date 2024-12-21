class Solution {
public:
    string stringHash(const string& s, int k) {
        string res{};
        int n = s.size();

        for (int i = 0; i < n; i += k) {
            int j = i + k - 1;
            int cnt = 0;

            while (j >= i) {
                cnt += s[j] - 'a';
                j--;
            }

            cnt %= 26;
            res += (char)('a' + cnt);
        }

        return res;
    }

};