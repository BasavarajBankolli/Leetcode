class Solution {
public:
    string getPermutation(int n, int k) {
        string s = "";
        for (int v = 1; v <= n; ++v) {
            s += to_string(v);
        }
        
        while (k-- > 1) {
        next_permutation(s.begin(), s.end());
        }

        return s;

        
    
    }
};