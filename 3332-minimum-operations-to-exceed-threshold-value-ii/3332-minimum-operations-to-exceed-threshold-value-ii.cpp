class Solution {
public:
    int minOperations(vector<int>& nums, int k) {

        priority_queue<long long, vector<long long>, greater<long long >> minpq(nums.begin(), nums.end());

        long long x,y;
        int cnt = 0;

        while (minpq.top() < k) {
            cnt++;

            x = minpq.top(), minpq.pop();
            y = minpq.top(), minpq.pop();

            minpq.push(min(x, y) * 2 + max(x, y));

        }

        return cnt;

    }
};