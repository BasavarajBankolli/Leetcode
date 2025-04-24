class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int a[2001] = {0};
        int uni = 0;
        for (int v: nums) {
            if (a[v] == 0) uni++;
            a[v]++;
            
        }
        
        memset(a, 0, sizeof(a));
        int cnt = 0, res = 0;
        int i = 0;

        for (int j = 0; j < nums.size(); j++) {
            if (a[nums[j]] == 0) cnt++;
            a[nums[j]]++;

            while (cnt == uni) {
                res += nums.size() - j;
                
                a[nums[i]] -= 1;
                if (a[nums[i]] == 0) cnt--;

                i++;
            }
        }

        return res;
    }
};