class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        const int n = nums.size();

        if(n < 1) return 0;

        set<int> s(nums.begin(), nums.end());

        int mx = 1, cur = 1;
        auto prev = s.begin();

        for(auto it = next(s.begin()); it != s.end(); it++){
            if(*prev + 1 == * it) cur++;
            else
                mx = max(mx,cur), cur = 1; 
            prev = it;
        }
        
        return max(mx, cur);
    }
};