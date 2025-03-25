class Solution {
public:
    bool checkValidCuts(int n, vector<vector<int>>& rectangles) {
        vector<pair<int, int>> x,y;

        for (auto a: rectangles){
            x.push_back({a[0],a[2]});
            y.push_back({a[1],a[3]});
        }

        sort(x.begin(), x.end());
        sort(y.begin(), y.end());

        return max(nonOverlap(x), nonOverlap(y)) == 3;
    }

private:
    int nonOverlap(vector<pair<int, int>> &a) {
        int cnt = 0, cur_co = -1;

        for (pair p: a){
            if (p.first >= cur_co) cnt++;

            cur_co = max(cur_co, p.second);

            if (cnt == 3) break;
        }

        return cnt;
    }
};