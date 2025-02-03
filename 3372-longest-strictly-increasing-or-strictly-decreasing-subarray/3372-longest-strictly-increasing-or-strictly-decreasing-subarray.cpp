class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inc = 1, maxInc = 1;
        int dec = 1, maxDec = 1;

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] < nums[i + 1]) {
                inc++;
            } else {
                maxInc = max(inc, maxInc);
                inc = 1;
            }

            if (nums[i] > nums[i + 1]) {
                dec++;
            } else {
                maxDec = max(dec, maxDec);
                dec = 1;
            }
        }

        maxInc = max(inc, maxInc);
        maxDec = max(dec, maxDec);

        return max(maxInc, maxDec);

    }
};