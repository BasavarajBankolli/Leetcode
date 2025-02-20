class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size()-1, j = b.size()-1;
        int carry = 0, sum;
        string res = "";
        while (i >= 0 || j >= 0){
            sum = carry;
            if (i >= 0) sum += a[i--] - '0';
            if (j >= 0) sum += b[j--] - '0';

            carry = sum > 1 ? 1: 0;
            res = to_string(sum % 2) + res;

        }
        if (carry) res = to_string(carry) + res;
        return res;
    }
};