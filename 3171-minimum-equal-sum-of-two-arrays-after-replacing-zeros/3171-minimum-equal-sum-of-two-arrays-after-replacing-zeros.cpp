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

        if (cnt1 == 0 && cnt2 == 0) {
            if(sum1 != sum2) return -1;
            return sum1;
        }
        
        sum1 += cnt1;
        sum2 += cnt2;

        if (sum1 <= sum2 && cnt1)return sum2;
        else if(sum2 <= sum1 && cnt2) return sum1;
        else{
            if (cnt2 == 0 && sum2 >= sum1) return sum2;
            else if(cnt1 == 0 && sum1 >= sum2) return sum1;
        }
        return -1;
    }
};