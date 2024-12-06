class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        
        unordered_set<int> set(banned.begin(), banned.end());
        int cnt = 0;
        long long sum = 0;

        for (int i = 1; i < n + 1; i ++) {
            // set.find(i) == set.end() means that i is not there in set..
            if (set.find(i) == set.end() && (sum + i) <= maxSum) {
                cnt++;
                sum += i;
            }
        }

        return cnt;
    }
};