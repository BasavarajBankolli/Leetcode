class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& nums) {
        long long cnt = 0L, tmp = 1L;
        const int n = nums.size();

        for(int i = 1; i < n; i++) {
            if (nums[i] != nums[i-1]) tmp++;
            else{
                cnt += 1L * (tmp * (tmp + 1))/2;
                tmp = 1L;
            }
        }

        cnt += 1L*((tmp*(tmp+1))/2);

        return cnt;      
    }
};