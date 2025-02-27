class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0, j = nums.size() - 1;
        int tot;

        while (i < j) {
            tot = nums[i] + nums[j];

            if (tot == target) return {i + 1, j + 1};

            else if (tot > target) j--;
            
            else i++; 
        }

        return {};
    }
};