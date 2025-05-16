class Solution {
public:
    vector<string> getWordsInLongestSubsequence(vector<string>& words, vector<int>& groups) {
        int n = words.size();
        vector<int> dp(n, 1), parent(n, -1);

        int ls = 1, lsidx = 0;  // Fix 1: Initialize lsidx to 0

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (groups[i] != groups[j] && words[i].size() == words[j].size() &&
                    check(words[i], words[j])) {

                    if (dp[j] + 1 > dp[i]) {
                        dp[i] = dp[j] + 1;
                        parent[i] = j;
                    }
                }
            }

            // Fix 2: Update longest length after inner loop
            if (dp[i] > ls) {
                ls = dp[i];
                lsidx = i;
            }
        }

        vector<string> res;
        while (lsidx != -1) {
            res.push_back(words[lsidx]);
            lsidx = parent[lsidx];
        }

        reverse(begin(res), end(res));
        return res;
    }

private:
    bool check(string &s1, string &s2) {
        int diff = 0;
        for (int i = 0; i < s2.size(); i++) {
            if (s1[i] != s2[i]) {
                diff++;
                if (diff > 1) return false;
            }
        }
        return diff == 1;
    }
};
