class Solution {
public:
    struct hash_p {
        size_t operator()(const pair<int, int>& p) const {
            return hash<int>()(p.first) ^ (hash<int>()(p.second) << 1);
        }
    };
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        unordered_map<pair<int, int>, int, hash_p> mp;

        for (vector<int> &a: dominoes) {
            pair<int, int> tmp = {a[0], a[1]}, rev = {a[1], a[0]};

            if (mp.find(rev) != mp.end()) mp[rev]++;
            else mp[tmp]++;

        }

        int cnt = 0;
        for(auto &p: mp) {
            int n = p.second - 1;
            if (n) {
                cnt += (n * (n + 1)) /2;
            }
        }

        return cnt;

    }
};