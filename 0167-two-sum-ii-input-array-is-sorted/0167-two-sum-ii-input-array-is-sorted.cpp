class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for(int i = 0; i < nums.size(); i++) {
            int rem = target - nums[i];
            
            if (mp.count(rem)){
                return {mp[rem] + 1, i + 1};
            }

            mp[nums[i]] = i;
        }
        return vector<int> {};
    }
};