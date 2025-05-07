
typedef pair<int, pair<int, int>> p; 
class Solution {
public:
    int minTimeToReach(vector<vector<int>>& mt) {
    vector<vector<int>> dir{{-1,0}, {1,0}, {0,-1}, {0 ,1}};
        int m = mt.size(), n = mt[0].size();

        vector<vector<int>> res(m, vector<int>(n, INT_MAX));
        priority_queue<p, vector<p>, greater<p>> pq;

        res[0][0] = 0;
        pq.push({0, {0,0}});

        while(!pq.empty()){
            int curT = pq.top().first;
            auto cll = pq.top().second;
            int i = cll.first, j = cll.second;

            pq.pop();

            if(i == m-1 && j == n-1) return curT;

            for (vector<int> &d: dir){
                int _i = i + d[0], _j = j + d[1];

                if (_i >= 0 && _i < m && _j >= 0 && _j < n){
                    int delay = max(mt[_i][_j] - curT, 0);
                    int arrT = curT + delay + 1;

                    if (arrT < res[_i][_j]){
                        res[_i][_j] = arrT;
                        pq.push({arrT, {_i, _j}});
                    }

                }
            }
        }

        return -1;

    }
};