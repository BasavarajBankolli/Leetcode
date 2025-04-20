class Solution {
public:
    int numRabbits(vector<int>& nums) {
        unordered_map<int,int> mp;
        int res = 0;

        for (int a: nums) mp[a]++;

        for (auto a: mp){
            res += (a.first+a.second) / (a.first+1) * (a.first+1);
        }

        return res;
    }
};