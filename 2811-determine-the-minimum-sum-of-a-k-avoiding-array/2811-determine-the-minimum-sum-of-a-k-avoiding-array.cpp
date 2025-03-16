class Solution {
public:
    int minimumSum(int n, int k) {
        unordered_set<int> seen;
        int sum = 0, cnt = 0;
        for (int i = 1; cnt < n; i++){
            if (seen.find(k-i) == seen.end())
                seen.insert(i), cnt++, sum += i;
        }

        return sum;
    }
};