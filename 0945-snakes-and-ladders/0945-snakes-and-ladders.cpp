class Solution {
public:
    pair<int, int> coordinate(int val, int n){
        val--; // 0-based indexing
        int row = n - 1 - (val / n);  
        int col = val % n;
        if ((n - 1 - row) % 2 == 1) 
            col = n - 1 - col;
        return make_pair(row, col);
    }


    int snakesAndLadders(vector<vector<int>>& board) {
        int n = board.size();
        vector<vector <int>> seen(n, vector<int>(n, 0));
        seen[n-1][0] = 1;
        queue<int> q;
        q.push(1);
        int steps = 0;

        while(!q.empty()){
            int sz = q.size();
            for (int i = 0; i < sz; i++) {
                int f = q.front();
                q.pop();
                if (f == n*n) return steps;

                for(int j = 1; j <= 6; j++) {
                    if(f+j > n*n) break;
                    pair<int, int> p = coordinate(f+j, n);  
                    int r = p.first, c = p.second;

                    if (seen[r][c]) continue;
                    seen[r][c] = 1;

                    if (board[r][c] == -1){
                        q.push(f + j);
                    }
                    else{
                        q.push(board[r][c]);
                    }
                }
            }
            steps++;
        }

        return -1;
    }
};