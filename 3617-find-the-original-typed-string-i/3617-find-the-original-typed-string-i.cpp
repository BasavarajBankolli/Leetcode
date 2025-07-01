class Solution {
public:
    int possibleStringCount(string word) {
        
        int res = 0;
        char prev = word[0];
        for (char c: word) {
            if (c == prev){
                res++;
            }
            prev = c;
        }

        return res;

        
    }
};