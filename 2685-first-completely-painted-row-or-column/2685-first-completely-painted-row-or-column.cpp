class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {

        const int n = mat.size(), m = mat[0].size();
        vector< pair<int, int>> ind(n*m);

        for(int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++){
                ind[mat[i][j]-1] = make_pair(i,j);
            }
        }

        vector <int> rows(n);
        vector <int> cols(m);

        int i = 0;
        for (const int& a: arr){
            int r = ind[a-1].first, c = ind[a-1].second;

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