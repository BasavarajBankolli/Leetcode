class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& que) {
        
        int n = nums.size();
        vector <int> tran(n, 0);
        for (int i = 1; i < n; i++) {
            tran[i] = tran[i - 1];

            if ((nums[i-1] % 2 == 0 && nums[i] % 2 == 0) || (nums[i-1] % 2 != 0 && nums[i] % 2 != 0)){
                tran[i]++;
            }
        }

        vector <bool> res;
        
        for (const auto& v:que){
            int l = v[0];
            int r = v[1];
            int cnt = tran[r] - (l > 0 ? tran[l]: 0);
            res.push_back(cnt == 0);
        }

        return res;

    }
};