class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int mx = 0;
        
        for (int i = 1; i < nums.size(); i++) {
            mx = max(mx, abs(nums[i] - nums[i-1]));
        }

        mx = max(mx, abs(nums[nums.size() - 1]- nums[0]));

        return mx;
    }
};