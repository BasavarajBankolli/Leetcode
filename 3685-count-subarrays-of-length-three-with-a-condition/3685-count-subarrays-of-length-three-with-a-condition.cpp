class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int cnt = 0;

        for (int i = 0; i < nums.size()-2; i++) {
            if (nums[i+1] == (nums[i] + nums[i+2])*2) cnt++;
        }
        return cnt;
    }
};