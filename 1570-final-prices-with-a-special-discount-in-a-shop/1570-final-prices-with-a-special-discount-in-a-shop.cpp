class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> res;

        for (int i = 0; i < n; i++) {
            bool dscnt = false;
            for (int j = i + 1; j < n; j++) {
                if (prices[i] >= prices[j]) {
                    res.push_back(prices[i] - prices[j]);
                    dscnt = true;
                    break;
                }
            }
            if (!dscnt) {
                res.push_back(prices[i]);
            }
        }

        return res;
    }
};
