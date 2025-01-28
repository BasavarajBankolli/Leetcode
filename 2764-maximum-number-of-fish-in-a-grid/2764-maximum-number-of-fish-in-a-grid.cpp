class Solution {
public:
    int findMaxFish(vector<vector<int>>& grid) {
        int ROWS = grid.size();
        int COLS = grid[0].size();
        int res = 0;
        vector<vector<bool>> visit(ROWS, vector<bool>(COLS, false));

        function<int(int, int)> dfs = [&](int r, int c) -> int {
            if (r < 0 || c < 0 || r == ROWS || c == COLS || grid[r][c] == 0 || visit[r][c]) {
                return 0;
            }
            visit[r][c] = true;
            int total = grid[r][c];
            vector<pair<int, int>> neighbors = {{r + 1, c}, {r - 1, c}, {r, c + 1}, {r, c - 1}};
            for (auto& [nr, nc] : neighbors) {
                total += dfs(nr, nc);
            }
            return total;
        };

        for (int r = 0; r < ROWS; ++r) {
            for (int c = 0; c < COLS; ++c) {
                if (grid[r][c] > 0 && !visit[r][c]) {
                    res = max(res, dfs(r, c));
                }
            }
        }

        return res;
    }
};