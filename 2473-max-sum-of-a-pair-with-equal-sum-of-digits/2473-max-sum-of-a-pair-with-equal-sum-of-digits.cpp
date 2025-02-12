class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int, pair<int, int>> mp;  // Stores two max values for each digit sum group
        int maxSum = -1;

        for (int a : nums) {
            int sum = 0, tmp = a;
            
            // Compute digit sum
            while (tmp) {
                sum += tmp % 10;
                tmp /= 10;
            }

            // Maintain the top two largest values for each digit sum
            auto& [max1, max2] = mp[sum];

            if (a > max1) {
                max2 = max1; // Shift max1 to max2
                max1 = a;    // Update max1 with the new largest value
            } else if (a > max2) {
                max2 = a;    // Update max2 if it's the second largest
            }

            if (max2 > 0) {
                maxSum = max(maxSum, max1 + max2);
            }
        }

        return maxSum;
    }
};