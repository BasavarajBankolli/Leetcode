class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int idx = 0;

        for(int a: nums){
            if(a != val) {
                nums[idx++] = a;
            }
        }

        return idx;
    }
};