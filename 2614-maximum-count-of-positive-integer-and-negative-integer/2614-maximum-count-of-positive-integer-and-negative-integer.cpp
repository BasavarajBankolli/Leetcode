class Solution {
public:
    int maximumCount(vector<int>& nums) {
        const int n = nums.size();
        int neg = 0, pos = 0;

        for (int i = 0; i < n; i++) {
            if(nums[i] < 0) neg++;
            else if(nums[i] > 0)pos++;
        }

        return max(neg, pos);
    }
};