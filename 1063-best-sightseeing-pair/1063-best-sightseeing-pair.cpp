class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int mx = -1;
        int l_fair = values[0];

        for (int i = 1; i < values.size(); i++) {

            mx = max(mx, l_fair + values[i] - i); // values[i]-i; in l_fair we adding i then here, removing current i that is nothing but + (j - i) or + i - j
            l_fair = max(l_fair, values[i] + i);
        }

        return mx;
    }
};