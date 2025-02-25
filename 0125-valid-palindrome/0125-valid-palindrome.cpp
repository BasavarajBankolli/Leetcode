class Solution {
public:
    bool isPalindrome(string s) {
        string ori = "";
        
        for (char c: s){
            if(isalpha(c) || isdigit(c)) ori.push_back(tolower(c));
        }

        string r = ori;
        reverse(r.begin(), r.end());

        return r == ori;
    }
};