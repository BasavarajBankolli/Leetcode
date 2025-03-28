class Solution {
public:
    int find_max(vector<int> &a) {
        int mx = a[0], cnt = 1;
        for (int i = 1; i < a.size(); i++) {
            if (a[i] == mx) {
                cnt++;
            } else {
                cnt--;
                if (cnt == 0) {
                    mx = a[i];
                    cnt = 1;
                }
            }
        }
        return mx;
    }

    int minimumIndex(vector<int>& nums) {
        int n = nums.size();

        int mx = find_max(nums), mxfreq = 0;
        for (int a : nums) {
            if (a == mx) mxfreq++;
        }

        if (mxfreq * 2 <= n) return -1;  

        int lcnt = 0, rcnt = mxfreq;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] == mx) {
                lcnt++;
                rcnt--;
            }
             
            if (lcnt * 2 > (i + 1) && rcnt * 2 > (n - i - 1))
                return i;
        }

        return -1;
    }
};
