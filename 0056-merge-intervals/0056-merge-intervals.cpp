class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        sort(arr.begin(), arr.end());

        vector<vector<int>> res;
        int cur = arr[0][0];
        int cur1 = arr[0][1];

        int i = 1;
        while (i < arr.size()) {
            
            if (arr[i][0] <= cur1) {
                cur1 = max(cur1, arr[i][1]);
            } 
            
            else {
                res.push_back(vector<int>{cur, cur1});
                cur = arr[i][0];
                cur1 = arr[i][1];
            }
            i++;
        }

        res.push_back(vector<int>{cur, cur1});

        return res;
    }
};
