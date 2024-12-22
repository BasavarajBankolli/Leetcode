class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int n = nums.size();
        int cnt = 0;

        for(int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (abs(nums[i] - nums[j]) == k){
                    cnt += 1;
                }
            }
        }

        return cnt;
    }
};