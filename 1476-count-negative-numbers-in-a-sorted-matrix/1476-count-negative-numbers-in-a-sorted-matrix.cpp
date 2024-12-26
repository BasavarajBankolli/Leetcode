class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int cnt = 0;

        int n = grid.size() - 1, m = grid[0].size() - 1;

        for (int i = n; i > -1; i--){
            for (int j = m; j > -1; j--){

                if (grid[i][j] < 0)cnt ++;
                else break;

            }
        }

        return cnt;
    }
};