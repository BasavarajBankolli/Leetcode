class Solution{
public:
    int specialTriplets(vector<int>& A) {
        int mod = 1e9 + 7, res = 0;
        unordered_map<int, int> left, right;
        for (int a : A)
            right[a]++;
        for (int a : A) {
            right[a]--;
            res = (res + 1LL * left[a * 2] * right[a * 2]) % mod;
            left[a]++;
        }
        return res;
    }
};