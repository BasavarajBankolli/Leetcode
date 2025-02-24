class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0, mn = nums.size(), j = 0, i;
        bool ok = 0;
        
        for (i = 0; i < nums.size(); i++) {
            while (j < nums.size() && sum >= target){
                mn = min(mn, i - j);
                sum -= nums[j++];
                ok = 1;
            }
            
            sum += nums[i];
        }

        while (sum >= target){
            mn = min(mn, i - j);
            sum -= nums[j++];
            ok = 1;
        }

        if (ok) return mn;
        return 0;

    }
};