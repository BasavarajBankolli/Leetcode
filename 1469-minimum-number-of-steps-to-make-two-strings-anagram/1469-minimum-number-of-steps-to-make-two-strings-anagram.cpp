class Solution {
public:    
    int minSteps(string& s, string& t) {
        int freq[26] = {0};
        for(int i = 0; i < s.size(); i++) {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }

        int ans = 0;
        for (int x : freq) {
            ans += max(0, x);
        }
        return ans;
    }
};