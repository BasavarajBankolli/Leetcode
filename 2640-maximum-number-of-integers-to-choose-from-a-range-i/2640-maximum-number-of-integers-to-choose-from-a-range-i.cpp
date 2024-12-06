class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {

        vector<int> vec(n + 1, 0);
        for (const auto& v: banned) {
            if (v <= n) vec[v] = 1;
        }


        int cnt = 0;
        long long sum = 0;

        for (int i = 1; i < n + 1; i ++) {
            // set.find(i) == set.end() means that i is not there in set..
            if (!(vec[i]) && (sum + i) <= maxSum) {
                cnt++;
                sum += i;
            }
        }

        return cnt;
    }
};