class Solution {
public:
    int findKthNumber(int n, int k) {
        long curr = 1;
        k--; // we already include 1

        while (k > 0) {
            long stps = countSteps(n, curr, curr + 1);
            if (stps <= k) {
                curr++;      // go to next sibling
                k -= stps;
            } else {
                curr *= 10;  // go to first child
                k--;
            }
        }
        return curr;
    }

private:
    long countSteps(int n, long first, long last) {
        long stps = 0;
        while (first <= n) {
            stps += min((long)n + 1, last) - first;
            first *= 10;
            last *= 10;
        }
        return stps;
    }
};
