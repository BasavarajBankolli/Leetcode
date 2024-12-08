class Solution {
public:
    static bool cmp(const vector<int>& a, const vector<int>& b){
        if(a[0] == b[0]) return a[1] < b[1];
        return a[0] < b[0];
    }

    vector<vector<int>> merge(vector<vector<int>>& arr) {
        
        sort(arr.begin(), arr.end(), cmp);

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