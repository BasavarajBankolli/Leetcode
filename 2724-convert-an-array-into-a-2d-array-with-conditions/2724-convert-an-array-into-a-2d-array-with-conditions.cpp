class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
         int n = nums.size() + 1;
        vector<int> freq(n, 0);

        for (const auto& num : nums) {
            freq[num]++;
        }

        int mx = 0;
        for (int i = 0; i < n; i++) {
            mx = max(mx, freq[i]);
        }

        vector<vector<int>> res(mx);
        int i = 0;
        for (int j = 1; j < n; j++) {
            while (freq[j] > 0) {
                res[i].push_back(j);
                freq[j]--;
                i = (i + 1) % mx;
            }
        }

        return res;
    }
};