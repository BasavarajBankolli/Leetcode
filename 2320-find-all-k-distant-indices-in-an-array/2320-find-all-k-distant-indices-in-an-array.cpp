class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        set<int> st;
        int n = nums.size();
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == key) {
                int start = max(0, i-k);
                int end = min(n-1, i + k);

                for(int j = start; j <= end; j++) {
                    st.insert(j);
                }
            }
        }

        vector<int> res(st.begin(), st.end());

        return res;
        
        
    }
};