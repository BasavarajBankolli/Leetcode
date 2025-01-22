class Solution {
public:
    int subarraySum(vector<int>& nums) {
        const int n = nums.size();
        vector <int> pref(n);
        pref[0] = nums[0];

        for (int i = 1; i < n; i++) {
            pref[i] = pref[i-1] + nums[i];
        }

        int res = 0, st;
        for (int i = 0; i < n; i++) {
           st = max(0, i - nums[i]);
           res += pref[i];
           if (st-1 >= 0) res -= pref[st-1];
        }

        return res;
         
    }
};