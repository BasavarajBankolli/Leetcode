class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int m = nums[n / 2];  

        long long cnt = 0;
        for (int num : nums) {
            cnt += abs(num - m);
        }

        return cnt;
    }

};