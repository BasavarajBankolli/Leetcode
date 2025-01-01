class Solution {
public:
    int maxScore(string s) {
        const int n = s.length();
        int one = count(s.begin(), s.end(), '1'), zero = 0;
        int res = -1;

        for (int i = 0; i < n - 1; i++){
            if (s[i] == '0') zero++;
            else one--;

            res = max(res, abs(zero + one));
        }

        return res;
    }
};