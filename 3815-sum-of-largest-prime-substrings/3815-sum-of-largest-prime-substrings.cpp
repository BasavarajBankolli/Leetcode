class Solution {
public:
    bool isPrime(long long num) {
        if(num < 2) return false;

        for(long long i = 2; i*i <= num; i++) {
            if(num % i == 0) return false;
        }
        return true;
    }

    long long sumOfLargestPrimes(string s) {
        int n = s.size();

        unordered_set<long long> nums;

        for(int i = 0; i < n; i++) {
            long long num = 0;
            for(int j = i; j < n; j++) {
                num = num*10 + (s[j] - '0');
                if(isPrime(num)) nums.insert(num);
            }
        }

        if (nums.size() < 4) return accumulate(nums.begin(), nums.end(), 0LL);

        vector<long long> res(nums.begin(), nums.end());
        sort(res.rbegin(), res.rend());

        long long ans = res[0] + res[1] + res[2];
        return ans;
    }
};