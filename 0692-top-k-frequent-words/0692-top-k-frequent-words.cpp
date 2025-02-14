class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map <string, int>mp;

        for (string word:words) {
            mp[word]++;
        }

        vector<pair<string, int>> vec(mp.begin(), mp.end());

        sort(vec.begin(), vec.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
            return (a.second > b.second) || (a.second == b.second && a.first < b.first);
        });

        vector<string> res;
        for (int i = 0; i<k; i++) {
            res.push_back(vec[i].first);
            
        }

        return res;

    }
};