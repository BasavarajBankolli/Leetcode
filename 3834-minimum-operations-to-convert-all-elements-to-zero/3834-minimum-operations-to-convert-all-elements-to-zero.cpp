class Solution {
public:
    int minOperations(vector<int>& nums) {
        vector<int> st = {0};
        int res = 0;

        for(int v: nums){
            while (!st.empty() && st.back() > v) st.pop_back();
            if (v && v != st.back()) st.push_back(v), res++;
        }

        return res;
    }
};