class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        const int n = nums.size();
        const long long tot = accumulate(nums.begin(), nums.end(), 0LL);
        long long leftsum = nums[0];
        int res = (leftsum >= tot - leftsum)? 1: 0;

        for (int i = 1; i < n - 1; i++) {
            leftsum += nums[i];
            if (leftsum >= (tot - leftsum)){
                res++;
            }
        }
        return res;
    }
};