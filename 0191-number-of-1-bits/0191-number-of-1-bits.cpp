class Solution {
public:
    int hammingWeight(int n) {
        bitset<32> binary(n);

        return binary.count();

    }
};