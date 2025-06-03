class Solution {
public:
    vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
        
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> res;
        for(int i = 0; i <= m - k; i++) {
            vector<int> r;
            for(int j = 0; j <= n - k; j++) {
                vector<int> a;
                for (int r = i; r < i + k; r++) {
                    for (int c = j; c < j + k; c++) {
                        a.push_back(grid[r][c]);
                    }
                }
                if (a.size() < 2) {
                    r.push_back(0);
                    continue;
                }

                sort(a.begin(), a.end());
                int mn = INT_MAX;
                for (int i = 1; i < a.size(); i++) {
                    if (a[i] != a[i-1])
                    mn = min(mn, abs(a[i] - a[i-1]));
                }
                if (mn == INT_MAX) mn = 0;
                r.push_back(mn);                  
            }

            res.push_back(r);
        }
        
        return res;
    }
};