class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        int cnt = 0;
        vector<vector<bool>> vis(r, vector<bool>(c, false));

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (grid[i][j] == '1' && !vis[i][j]) {
                    dfs(grid, i, j, vis, r, c);
                    cnt++; 
                }
            }
        }
        return cnt;
    }

private:
    void dfs(vector<vector<char>>& grid, int row, int col,
             vector<vector<bool>>& vis, int r, int c) {
        if (row < 0 || col < 0 || row >= r || col >= c) return;
        if (vis[row][col] || grid[row][col] == '0') return;

        vis[row][col] = true;

        dfs(grid, row + 1, col, vis, r, c);
        dfs(grid, row - 1, col, vis, r, c);
        dfs(grid, row, col + 1, vis, r, c);
        dfs(grid, row, col - 1, vis, r, c);
    }
};
