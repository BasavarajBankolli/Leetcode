class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        const long long n = nums.size();
        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++) {
            mp[nums[i] - i]++;
        }

        long long tot = (long long)n * (n - 1) / 2;
        long long good = 0L;
        
        for (const auto& p : mp) {
            int cnt = p.second;
            good += (long long)cnt * (cnt - 1) / 2;  
        }

        return tot - good;
    }

};