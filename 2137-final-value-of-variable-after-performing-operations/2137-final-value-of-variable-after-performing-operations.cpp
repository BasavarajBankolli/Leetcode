class Solution {
public:
    int finalValueAfterOperations(vector<string>& opts) {
        int cnt = 0;

        cnt = (count(opts.begin(), opts.end(), "X++") + count(opts.begin(), opts.end(),"++X"));

        cnt -= (count(opts.begin(), opts.end(), "X--") + count(opts.begin(), opts.end(),"--X"));

        return cnt;
    }
};