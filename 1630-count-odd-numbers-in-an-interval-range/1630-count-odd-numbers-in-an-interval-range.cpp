class Solution {
public:
    int countOdds(int low, int high) {
        int res = floor((high - low) / 2);
        if (high % 2 || low % 2) res++;
        return res;
    }
};