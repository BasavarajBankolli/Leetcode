class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long res = 0;
        int l = 0, cnt = 0, n = nums.size();
        int mx = *max_element(nums.begin(), nums.end());

        for (int r = 0; r < n; r++) {
            if (nums[r] == mx) cnt++;
            while (cnt == k){
                res += 1L*(n - r);
                if (nums[l] == mx) cnt--;
                l++;
            }

        }
        return res;
    }
};