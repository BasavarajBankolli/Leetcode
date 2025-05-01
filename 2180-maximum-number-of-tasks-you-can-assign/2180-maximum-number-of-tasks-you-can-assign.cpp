class Solution {
public:
    int maxTaskAssign(vector<int>& t, vector<int>& w, int pills, int strength) {
        int n = t.size(), m = w.size();
        sort(t.begin(), t.end());
        sort(w.begin(), w.end());

        auto check = [&](int mid) -> bool {
            int p = pills;
            multiset<int> ws;
            for (int i = m - mid; i < m; ++i) {
                ws.insert(w[i]);
            }
            for (int i = mid - 1; i >= 0; --i) {
               
                if (auto it = prev(ws.end()); *it >= t[i]) {
                    ws.erase(it);
                } else {
                    if (!p) {
                        return false;
                    }
                    auto rep = ws.lower_bound(t[i] - strength);
                    if (rep == ws.end()) {
                        return false;
                    }
                    --p;
                    ws.erase(rep);
                }
            }
            return true;
        };

        int l = 1, r = min(m, n), ans = 0;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (check(mid)) {
                ans = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return ans;
    }
};