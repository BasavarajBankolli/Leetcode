class Solution {
public:
    bool check(vector<int>& nums) {
        int cnt = 0;
        const int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i+1)%n] && cnt++ > 0) return false;
        }

        return true;
        
    }
};