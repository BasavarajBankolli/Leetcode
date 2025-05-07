class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int res = 0;
        int l = 0,  cnt0 = 0;
        for(int r = 0; r < nums.size(); r++){
            if (nums[r] == 0) cnt0++;

            while(l < r && cnt0 > k){
                if(nums[l] == 0) cnt0--;
                l++;
            }
            if (cnt0 <= k) res = max(res, r-l+1);
        }

        return res;
    }
};