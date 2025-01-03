class Solution {
public:
    int maxVowels(string s, int k) {
        string ref = "aeiou";
        int mx = 0, cur = 0;

        for (int i = 0; i < k; i++) {
            if (ref.find(s[i]) != string::npos) {
                cur++;
            }
        }
        mx = cur;
        for (int i = k; i < s.size(); i++) {
            if (ref.find(s[i]) != string::npos) {
                cur++;
            }
            if (ref.find(s[i - k]) != string::npos) {
                cur--;
            }
            mx = max(mx, cur);
        }
        
        return mx;
    }
};