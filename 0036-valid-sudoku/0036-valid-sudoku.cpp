class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, vector<char>> row, col;

        for (int r = 0; r < 9; r++) {
            for (int c = 0; c < 9; c++) {
                if (board[r][c] == '.') continue;

                char ch = board[r][c];

                if (find(row[r].begin(), row[r].end(), ch) != row[r].end())
                    return false;

                if (find(col[c].begin(), col[c].end(), ch) != col[c].end())
                    return false;

                int sr = (r / 3) * 3;
                int sc = (c / 3) * 3;
                for (int i = sr; i < sr + 3; i++) {
                    for (int j = sc; j < sc + 3; j++) {
                        if ((i != r && j != c) && board[i][j] == ch)
                            return false;
                    }
                }

                row[r].push_back(ch);
                col[c].push_back(ch);
            }
        }

        return true;
    }
};