
class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        long long cnt = 0;  

        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < nums.size(); ++i) {
            int x = nums[i];

            int right = upper_bound(nums.begin(), nums.begin() + i, upper - x) - nums.begin();
            int left = lower_bound(nums.begin(), nums.begin() + i, lower - x) - nums.begin();

            cnt += (right - left);
        }

        return cnt;
    }
};
