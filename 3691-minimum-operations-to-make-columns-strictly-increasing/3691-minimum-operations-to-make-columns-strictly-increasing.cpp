class Solution {
public:
    int minimumOperations(vector<vector<int>> &grid) {
        const int n = grid[0].size();
        const int m = grid.size();
        int res = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 1; j < m; j++) {
                int diff = grid[j - 1][i] - grid[j][i] + 1;
                if (diff > 0) {
                    res += diff;
                    grid[j][i] += diff;
                }
            }
        }
        return res;
    }

};