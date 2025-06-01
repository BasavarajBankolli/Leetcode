class Solution {
public:
    bool palindrome(string &s, int l, int r) {
        while(l <= r){
            if(s[l] != s[r])
                return 0;
            l++;
            r--;
        }

        return 1;
    }

    string longestPalindrome(string s) {\
        int n = s.length();
        int l = 0, r = n-1;
        int mx = 0;
        int resl = 0;

        for(int i = 0; i < n-1; i++) {
            for(int j = n-1; j > i; j--) {
                if(j-i > mx && palindrome(s, i,j)){
                    mx = j - i;
                    resl = i;
                }
            }
        }

        return s.substr(resl, mx + 1);

    }
};