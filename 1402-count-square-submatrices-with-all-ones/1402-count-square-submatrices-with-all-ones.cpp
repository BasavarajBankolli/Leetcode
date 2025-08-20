class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int res = 0;
        vector<vector<int>> dp(rows, vector<int>(cols));

        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++){
                if (matrix[r][c] == 1){
                    if (r == 0 || c == 0){
                        dp[r][c] = 1;
                    }

                    else{
                        dp[r][c] = min({dp[r-1][c], dp[r][c-1], dp[r-1][c-1]}) + 1;
                    }

                    res += dp[r][c];
                }
            }
        }

        return res;
        
    }
};