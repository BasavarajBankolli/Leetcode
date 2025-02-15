class Solution {
public:
    bool backtrack(string s, int sq, int idx, int sum) {
        if(idx == s.size()){
            return sum == sq;
        }

        int val = 0;
        for (int i = idx; i < s.size(); i++) {
            val = val * 10 + (s[i] - '0');
            if (val + sum > sq) break;
            if (backtrack(s, sq, i + 1, sum + val)) {
                return true; 
            }
        }
        return false;
        
    }

    int punishmentNumber(int n) {
        int res = 0;
        for(int i = 0; i < n + 1; i++) {
            int sq = pow(i, 2);
            string sqstr = to_string(sq);

            if (backtrack(sqstr, i, 0, 0)) res += sq;
        }

        return res;
    }
};