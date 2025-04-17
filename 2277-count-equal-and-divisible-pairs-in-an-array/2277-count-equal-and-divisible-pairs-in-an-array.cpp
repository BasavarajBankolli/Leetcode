class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        unordered_map<int, vector<int>> mp;

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]].push_back(i);
        }

        int cnt = 0;       
        for (auto ref: mp) {
            vector<int> a = ref.second;
            for(int i = 0; i < a.size()-1; i++) {
                for(int j = i + 1; j < a.size(); j++){
                    if (a[i] * a[j] % k == 0) cnt++;
                }
            }
        }

        return cnt;
    }
};