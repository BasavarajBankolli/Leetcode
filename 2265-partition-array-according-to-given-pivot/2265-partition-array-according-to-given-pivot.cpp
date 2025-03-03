class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> res;
        int pcnt  = 0;

        for (int a: nums) {
            if (a < pivot)res.push_back(a);
            else if (a == pivot) pcnt++;
        }

        while (pcnt--)res.push_back(pivot);

        for (int a: nums) {
            if (a > pivot) res.push_back(a);
        }

        return res;


    }
};