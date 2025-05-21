class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        long sum = accumulate(piles.begin(), piles.end(), 0L);

        priority_queue<int, vector<int>> pq(piles.begin(), piles.end());

        while (k--) {
            int t = pq.top();
            sum -= t;
            pq.pop();

            t = (t + 1) / 2;  // correct ceil 

            pq.push(t);
            sum += t;
        }


        return sum;
    }
};