class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res = {0};

        for (int v = 1; v <= n; ++v) {
            int count = __builtin_popcount(v); 
            res.push_back(count);
        }

        return res;
    }
};