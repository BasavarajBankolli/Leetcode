class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long n = nums.size();
        unordered_map<long long, long long> m;
        for(long long i = 0; i < n; i++) {
            m[nums[i] - i]++;
        }
        long long good = 0, total = (n - 1) * n / 2;
        
        for(auto it: m) {
            if(it.second) good += it.second * (it.second - 1) / 2;
        }
        return total - good;
    }

};