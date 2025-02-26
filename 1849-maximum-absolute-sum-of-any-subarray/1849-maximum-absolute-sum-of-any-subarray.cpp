class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int mn = INT_MAX, mx = INT_MIN;
        int sum = 0;
        for (int a: nums) {
            sum += a;
            mn = min (mn, sum);
            sum = sum > 0? 0: sum; 
        }

        sum = 0;

        for (int a: nums) {
            sum += a;
            mx = max(mx, sum);
            sum = sum < 0? 0: sum;
        }

        return max(-1* mn, mx);
    }
};