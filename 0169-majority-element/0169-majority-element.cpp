class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int num = 0, cnt = 0;
        
        for (int v: nums) {
            if(cnt == 0) num = v;

            if (v == num) cnt++;
            else cnt--;
        }

        return num;
    }
};