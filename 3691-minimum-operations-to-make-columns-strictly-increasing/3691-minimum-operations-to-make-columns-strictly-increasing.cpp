class Solution {
public:
    int minimumOperations(vector<vector<int>>& grid) {
        
        const int n = grid[0].size();
        const int m = grid.size();
        int res = 0, temp;
        for (int i = 0; i < n; i++) {
            for (int j = 1; j < m; j++) {
                temp = (grid[j-1][i] - grid[j][i]) + 1;
                if (temp > 0){
                    res += temp;
                    grid[j][i] += temp;
                }
            }
        }
        return res;
    }
};