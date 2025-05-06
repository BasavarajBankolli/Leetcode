class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int mx = 0, prev = 0, cur = 0;

        for(int v: nums){
            if(v) cur++;
            else{
                mx = max(mx, prev+cur);
                prev = cur;
                cur = 0;
            }
        }
        
        mx = max(mx, prev+cur);
        if (mx == nums.size())
            return mx-1;

        return mx;
    }
};