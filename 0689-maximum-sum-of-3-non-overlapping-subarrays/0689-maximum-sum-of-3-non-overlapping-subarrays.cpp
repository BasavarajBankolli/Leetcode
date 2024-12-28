class Solution {
public:
    vector<int> maxSumOfThreeSubarrays(vector<int>& nums, int k) {
        const int m = nums.size();
        int i;

        vector <int> windows(m - k + 1, 0);
        const int n = windows.size();
        
        int cur_sum = accumulate(nums.begin(), nums.begin() + k, 0);
        windows[0] = cur_sum;

        for (i = 1; i < n; i++) {
            cur_sum += nums[i + k - 1] - nums[i - 1];
            windows[i] = cur_sum;
        }

        vector <int> l(n, 0);
        int mx = 0;

        for (i = 0; i < n; i++ ){
            if (windows[i] > windows[mx]) mx = i;

            l[i] = mx;
        }        

        vector <int> r(n, 0);
        mx = n - 1;

        for (i = n - 1; i > -1; i--) {
            if (windows[i] >= windows[mx]) mx = i;

            r[i] = mx;
        }

        vector <int> res = {-1, -1, -1};
        long long mx_sum = 0;

        for (int cur = k; cur < n - k; cur++){
            int prev = l[cur - k], next = r[cur + k];
            long long tot = windows[prev] + windows[cur] + windows[next];

            if (tot > mx_sum) {
                mx_sum = tot;
                res = {prev, cur, next};
            }

            else if (tot == mx_sum) {
                res = min(res, {prev, cur, next});
            }
        }

        return res;
    }
};