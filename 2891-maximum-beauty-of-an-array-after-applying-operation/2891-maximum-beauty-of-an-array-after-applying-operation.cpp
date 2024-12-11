class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        int mx = *max_element(nums.begin(), nums.end());

        vector <int> ref(mx + 10, 0);
        int n = nums.size();
        for (int i = 0; i < n; i++ ) {
            int l = max(0, nums[i] - k);
            int r = min(mx, nums[i] + k) + 1;

            ref[l] ++;
            ref[r] --;
        }

        int res = ref[0];

        for (int i = 1; i < ref.size(); i++) {
            ref[i] += ref[i - 1];

            if (ref[i] > res) res = ref[i];
        }

        return res;
    }
};