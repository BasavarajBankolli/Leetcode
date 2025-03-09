class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int i = 1, cnt = 0, res = 0;
        int n = colors.size(); 
        while (i++ < n + k) {
            if (colors[i % n] == colors[(i-1) % n]) {
                cnt = 0;
            }
            cnt++;
            if (cnt >= k)
                res++;
        }
        return res;
    }
};