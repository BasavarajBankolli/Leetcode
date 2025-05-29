class Solution {
public:
    vector<vector<int>> adjs(vector<vector<int>>& edges, int n){
        vector<vector<int>> res(n);  // Allocate space
        for (auto &edge: edges){
            int u = edge[0], v = edge[1];
            res[u].push_back(v);
            res[v].push_back(u);
        }
        return res;
    }

    void dfs(int cur, vector<vector<int>> &adj, int par, vector<int> &mark, int &cnt0, int &cnt1) {
        if (mark[cur] == 0) cnt0++;
        else cnt1++;

        for (auto &ngbr: adj[cur]) {
            if (ngbr != par && mark[ngbr] == -1){
                mark[ngbr] = !mark[cur];  // Alternate the numer even to odd, odd to even
                dfs(ngbr, adj, cur, mark, cnt0, cnt1);
            }
        }
    }

    vector<int> maxTargetNodes(vector<vector<int>>& edges1, vector<vector<int>>& edges2) {
        int m = edges1.size() + 1, n = edges2.size() + 1;

        vector<vector<int>> adjA = adjs(edges1, m);
        vector<vector<int>> adjB = adjs(edges2, n);

        vector<int> markA(m, -1);
        int cnt0a = 0, cnt1a = 0;
        markA[0] = 0;
        dfs(0, adjA, -1, markA, cnt0a, cnt1a);

        vector<int> markB(n, -1);
        int cnt0b = 0, cnt1b = 0;
        markB[0] = 0;
        dfs(0, adjB, -1, markB, cnt0b, cnt1b);
        int mx2 = max(cnt0b, cnt1b);

        vector<int> res(m);
        for(int i = 0; i < m; i++) {
            res[i] = (markA[i] == 0 ? cnt0a : cnt1a) + mx2;
        }

        return res;
    }
};
