class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int sum = 0;
        
        for (int a: nums) {
            sum |= a;
        }

        return sum << (nums.size() - 1);
    }
};