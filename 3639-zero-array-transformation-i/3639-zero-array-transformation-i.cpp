class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> pre(n+1);

        for(vector<int> &a:queries) {
            pre[a[0]] += 1;
            pre[a[1]+1] -= 1;
        }

        for (int i = 0; i < n; i++) {
            if(i != 0) pre[i] += pre[i-1];

            if(pre[i] < nums[i])return 0;
        }

        return 1;
    }
};