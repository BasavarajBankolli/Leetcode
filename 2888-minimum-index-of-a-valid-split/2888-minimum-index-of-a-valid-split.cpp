class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        int dominant = -1, maxFreq = 0;

        for (int num : nums) {
            mp[num]++;
            if (mp[num] > maxFreq) {
                maxFreq = mp[num];
                dominant = num;
            }
        }

        if (maxFreq * 2 <= n) return -1;  
        
        int lcnt = 0, rcnt = maxFreq;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] == dominant) {
                lcnt++;
                rcnt--;
            }

            if (lcnt * 2 > (i + 1) && rcnt * 2 > (n - i - 1)) {
                return i;
            }
        }

        return -1;
    }
};
