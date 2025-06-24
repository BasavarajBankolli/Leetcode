class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> res;
        int n = nums.size(), left = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == key) {
                int start = max(left, i-k);
                int end = min(n-1, i + k);

                for(int j = start; j <= end; j++) {
                    res.push_back(j);
                }
                left = end + 1;
            }
        }

        return res;
        
        
    }
};