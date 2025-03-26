class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> nums;
        int rem = grid[0][0] % x;

        for (vector<int>& row : grid) {
            for (int v : row) {
                if (v % x != rem) return -1;
                nums.push_back(v);
            }
        }

        sort(nums.begin(), nums.end());
        int median = nums[nums.size() / 2];  
        
        int res = 0;
        for (int v : nums) {
            res += abs(v - median) / x;
        }

        return res;
    }
};
