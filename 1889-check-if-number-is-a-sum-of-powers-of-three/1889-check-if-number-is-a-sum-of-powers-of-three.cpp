class Solution {
public:
    bool checkPowersOfThree(int n) {
        while (n) {
            if (n % 3 == 2) return 0;
            n /= 3;
        }

        return n == 0;
    }
};