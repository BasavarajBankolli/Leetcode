class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;
        deque<int> q;

        for(int i = 0; i < nums.size(); i++) {
            while (!q.empty() && q[q.size()-1] < nums[i]){
                q.pop_back();
            }
            q.push_back(nums[i]);

            if (i >= k && nums[i-k] == q.front())
                q.pop_front();

            if (i >= k-1) 
                res.push_back(q.front());

        }

        return res;
    }
};