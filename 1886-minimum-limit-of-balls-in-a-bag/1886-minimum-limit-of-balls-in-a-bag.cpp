class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int l = 1;
        int r = *max_element(nums.begin(), nums.end());

        while (l < r) {
            int m = l + (r - l) / 2;
            
            if (divide_it(nums, m, maxOperations)){
                r = m;
            }
            else{
                l = m + 1;
            }
        }

        return l;
    }

private:
    bool divide_it(vector <int>& nums, int maxballs, int mx){
        int oprs = 0;
        for (const auto& v :nums){
            oprs += ceil((double)v/ maxballs) - 1;

            if (oprs > mx)
                return false;
        }

        return true;
    }
};