class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0, j = nums.size() - 1;
        int tot;
        vector <int> res(2);

        while (i < j) {
            tot = nums[i] + nums[j];

            if (tot == target){
                res[0] = i + 1, res[1] = j + 1;
                break;
            }

            else if (tot > target) j--;

            else i++; 
        }

        return res;
    }
};