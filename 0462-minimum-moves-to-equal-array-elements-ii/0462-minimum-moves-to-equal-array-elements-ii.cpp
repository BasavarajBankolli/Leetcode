class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int res = 0;

        int i = 0, j = nums.size()-1;

        while (i <= j) {
            res += (nums[j--] - nums[i++]);
        }
        return res;
    }

};