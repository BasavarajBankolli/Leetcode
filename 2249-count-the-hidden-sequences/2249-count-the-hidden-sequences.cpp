class Solution {
public:
    int numberOfArrays(vector<int>& diff, int lower, int upper) {
        int n = diff.size(); n++;
        
        long mn = 1, mx = 1, prev = 1;

        for (int i = 1; i < n; i++) {
            prev = (prev + diff[i-1]);
            mn = min(mn, prev);
            mx = max(mx, prev);
        }

        long high = mx - (mn-lower);
        long res = upper - high + 1;

        if (res < 0)
            return 0;

        return res; 
    }
};