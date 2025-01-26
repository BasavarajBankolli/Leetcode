class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector <long long> res;
        long long val;
        if (num % 3 == 0){
            val = num / 3;
            res = {val - 1, val, val + 1};
        }
        return res;
    }
};