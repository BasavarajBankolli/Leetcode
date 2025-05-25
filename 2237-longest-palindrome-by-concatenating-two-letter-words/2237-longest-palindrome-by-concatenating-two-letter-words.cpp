class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string, int> mp;
        for (const string& w : words) {
            mp[w]++;
        }

        int res = 0;
        bool ok = false;

        for (auto& [word, count] : mp) {
            string rev = string(word.rbegin(), word.rend());

            if (word == rev) {
                res += (count / 2) * 4;
                if (count % 2) ok = true;
            } else if (mp.find(rev) != mp.end()) {
                int pairs = min(count, mp[rev]);
                res += pairs * 4;
                mp[rev] = 0; 
                mp[word] = 0;
            }
        }

        if (ok) res += 2; 

        return res;
    }
};