class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        int res = 0, n = nums.size();
        int j = 0,i;

        sort(nums.begin(), nums.end());
        for(i = 0; i < n; i++) {
            if(nums[i] - nums[j] > k) {
                res++;
                j = i;
            }
        }
        if(i != j) res++;
        return res;
    }
};