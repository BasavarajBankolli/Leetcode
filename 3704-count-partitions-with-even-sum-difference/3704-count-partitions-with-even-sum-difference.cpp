class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int ans = 0, lsum = 0, rsum = accumulate(nums.begin(), nums.end(), 0);
        for(int i = 0; i+1 < nums.size(); ++i){
            rsum -= nums[i];
            lsum += nums[i];
            if((rsum - lsum) % 2 == 0) ans++;
        }
        return ans;
    }
};