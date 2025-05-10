class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long sum1 = 0L, sum2 = 0L;
        int cnt1 = 0, cnt2 = 0;

        for(int v: nums1) {
            if(v == 0) cnt1++;
            sum1 += v;
        }
        for(int v: nums2) {
            if(v == 0) cnt2++;
            sum2 += v;
        }
        
        sum1 += cnt1;
        sum2 += cnt2;
        if (cnt1 == 0 && sum1 < sum2 || cnt2 == 0 && sum2 < sum1) return -1;

        return max(sum1, sum2);
    }
};