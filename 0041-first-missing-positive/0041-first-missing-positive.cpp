class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        const int n = 100002;
        int a[n] = {0};

        for(int val: nums){
            if (val > 0 && val < n){
                a[val] += 1;
            }
        }

        for (int i = 1; i < n; i++){
            if(!a[i]) return i;
        }

        return -1;
    }
};