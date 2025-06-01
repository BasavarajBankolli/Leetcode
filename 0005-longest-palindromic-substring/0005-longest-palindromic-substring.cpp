class Solution {
public:
    string longestPalindrome(string s) {\
        int n = s.length();
        int mx = 0;
        int startidx = 0;

        /* 
        auto check = [&](int l, int r){
            while(l >= 0 && r < n && s[l] == s[r]){
                if(r - l > mx){
                    mx = r - l;
                    startidx = l;
                }
                r++;
                l--;
            }
        };

        */

        for(int i = 0; i < n-1; i++) {
            // check(i, i);
            // check(i, i+1);
            int l = i, r = i;
            while(l >= 0 && r < n && s[l] == s[r]){
                if(r - l > mx){
                    mx = r - l;
                    startidx = l;
                }
                r++;
                l--;
            }

            l = i, r = i + 1;
            while(l >= 0 && r < n && s[l] == s[r]){
                if(r - l > mx){
                    mx = r - l;
                    startidx = l;
                }
                r++;
                l--;
            }
        }

        return s.substr(startidx, mx + 1);

    }
};