class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int orSum = 0, res = 0, l = 0, r;

        for(r = 0; r < nums.size(); r++) {
            while ((orSum & nums[r]) != 0){
                res = max(res, r-l);
                orSum ^= nums[l++];
            }

            orSum |= nums[r];
        }

        
        return max(res, r-l);
    }
};