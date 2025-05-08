class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_set<int> s;
        long long mx = 0L, sum = 0L;
        int j = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (s.find(nums[i]) == s.end()) sum += nums[i];
            else {
                while (nums[j] != nums[i]){
                    sum -= nums[j];
                    s.erase(nums[j]);
                    j += 1;
                }
                s.erase(nums[j++]);
            }
            s.insert(nums[i]);

            if (i - j + 1 == k){
                mx = max(mx, sum);
                sum -= nums[j];
                s.erase(nums[j]);
                j += 1;
            }
        }

        return mx;
    }
};