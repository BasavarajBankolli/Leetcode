class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int res = 0; 
        int n = nums.size();
 
        for (auto& a : nums ) {
            res |= a;
        }
        return res * (1 << (n - 1));
    }
};