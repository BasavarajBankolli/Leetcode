class Solution {
public:
    int longestSubsequence(string s, int k) {
        int length = 0;
        int val = 1;

        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == '0') {
                length++; 
            } 
            else if (val <= k){
                k -= val;
                length++;
            }

            if (val <= k){
                val <<= 1;
            }
               
        }

        return length;
    }

};