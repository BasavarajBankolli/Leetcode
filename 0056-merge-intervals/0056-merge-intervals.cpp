class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        sort(arr.begin(), arr.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[0] < b[0];
        });

        vector<vector<int>> res;
        for (const auto& vals : arr) {
            if (res.empty() || res.back()[1] < vals[0]) {
                res.push_back(vals);
            } else {
                res.back()[1] = max(res.back()[1], vals[1]);
            }
        }
        
        return res;
    }
};