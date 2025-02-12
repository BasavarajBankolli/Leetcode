class Solution {
public:
    int strStr(string haystack, string needle) {
        const int n = needle.size();

        vector <char> lps(n,0);

        int prev = 0, idx = 1;

        while (idx < n){
            if (needle[idx] == needle[prev]) {
                lps[idx] = prev + 1;
                idx++, prev++;
            }

            else if (prev == 0) {
                idx ++;
            }

            else {
                prev = lps[prev-1];
            }
        }

        int i = 0, j = 0;

        while (i < haystack.size()) {
            if (needle[j] == haystack[i]) i++,j++;
            else {
                if (j == 0) i++;
                else j = lps[j-1];
            }

            if (j == n){
                return i - n;
            }
        
        }
        return -1;

    }
};