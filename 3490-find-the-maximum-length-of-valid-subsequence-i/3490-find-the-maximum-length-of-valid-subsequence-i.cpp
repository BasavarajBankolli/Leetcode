class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int res = 0, cur = 0;

        // for odd
        for(int a: nums) {
            if(a % 2) cur++;
        }         

        res = cur;
        cur = 0;
        
        // for even
        for(int a: nums){
            if (a % 2 == 0)cur++;
        }

        res = max(cur, res);
        cur = 0;

        // for even - odd
        int flag = 0;
        for(int a: nums) {
            if (flag == 0 && a % 2 == 0) {
                cur++;
                flag = !flag;
            }
            else if(flag == 1 && a % 2 == 1){
                cur++;
                flag = !flag;
            }
        }

        res = max(res, cur);
        cur = 0;

        // for odd - even
        flag = 1;
        for(int a: nums) {
            if (flag == 0 && a % 2 == 0) {
                cur++;
                flag = !flag;
            }
            else if(flag == 1 && a % 2 == 1){
                cur++;
                flag = !flag;
            }
        }

        return max(res, cur);
      
    }
};