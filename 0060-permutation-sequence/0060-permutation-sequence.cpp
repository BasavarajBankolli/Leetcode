class Solution {
public:
    string getPermutation(int n, int k) {
        string s = "";
        for (int v = 1; v <= n; ++v) {
            s += to_string(v);
        }
        
        vector<string> permutationsList;
        
        do {
            permutationsList.push_back(s);
        } while (next_permutation(s.begin(), s.end()));
        
        return permutationsList[k - 1];
    
    }
};