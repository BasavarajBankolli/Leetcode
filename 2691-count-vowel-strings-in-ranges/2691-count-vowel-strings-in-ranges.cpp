class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        unordered_set<char> s = {'a', 'e', 'i', 'o', 'u'};
        int n = words.size();
        vector<int> pre(n + 1, 0);

        for (int i = 0; i < n; i++) {
            int cnt = (s.count(words[i].front()) && s.count(words[i].back())) ? 1 : 0;
            pre[i + 1] = pre[i] + cnt;
        }

        vector<int> res;
        for (auto& pair : queries) {
            res.push_back(pre[pair[1] + 1] - pre[pair[0]]);
        }

        return res;
    }
};
