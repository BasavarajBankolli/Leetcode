class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int mxcoins = 0;

        int i = 0, j = piles.size() - 2;
        sort(piles.begin(), piles.end());
        
        while (i < j) {
            mxcoins += piles[j];
            i += 1;
            j -= 2;
        }

        return  mxcoins;
    }
};