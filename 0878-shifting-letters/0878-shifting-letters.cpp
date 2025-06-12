class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n = shifts.size();
        vector<long long> suf(n);
        suf[n-1] = shifts[n-1];

        for(int i = n-2; i >= 0; i--){
            suf[i] = shifts[i] + suf[i+1];
        }

        for(int i = 0; i < n; i++) {
            s[i] = 'a' + (s[i] - 'a' + suf[i]) % 26; 
        }

        return s;
    }
};