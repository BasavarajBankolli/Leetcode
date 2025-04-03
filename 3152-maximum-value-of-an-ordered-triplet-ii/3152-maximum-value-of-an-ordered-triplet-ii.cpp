class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        long long res = 0LL, imax = 0LL, dmax = 0LL;
        
        for (size_t k = 0; k < n; k++) {
            res = max(res, 1LL * dmax * nums[k]);
            dmax = max(dmax, imax - nums[k]);
            imax = max(imax, 1LL * nums[k]);
        }
        
        return res;

    }
};