class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        unordered_map <int, pair<int, int>> ind;

        const int n = mat.size(), m = mat[0].size();
        for(int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++){
                ind[mat[i][j]] = make_pair(i,j);
            }
        }

        int rows[100000] = {0};
        int cols[100000] = {0};

        int i = 0;
        for (const int& a: arr){
            int r = ind[a].first, c = ind[a].second;

            rows[r]++;
            cols[c]++;

            if (rows[r] == m || cols[c] == n){
                break;
            }
            i++;
        }
        return i;
    }
};