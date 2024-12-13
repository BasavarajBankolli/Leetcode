class Solution {
public:

    long long findScore(vector<int>& nums) {
        const int N = 100000, n = nums.size();
        bitset<N> mark = 0;
        vector<pair<int, int>> nIdx(n);

        for(int i = 0; i < n; i++)
            nIdx[i] = {nums[i], i};

        sort(nIdx.begin(), nIdx.end());

        long long sum = 0;
        for(auto& [x, i]: nIdx){
            if (mark[i]) continue;
            sum += x;

            mark[i] = 1;
            if (i > 0) mark[i-1] = 1;
            if (i < n-1) mark[i+1] = 1;
        }

        return sum;
    }
};