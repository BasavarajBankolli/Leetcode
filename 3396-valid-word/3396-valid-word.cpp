class Solution {
public:
    bool isValid(string word) {
        if (word.size() < 3) return 0;

        bool f1 = 0, f2 = 0;
        string s = "aeiouAEIOU";

        for(char c: word) {
            if (isalpha(c)) {
                if (s.find(c) != string::npos) f1 = 1;
                else f2 = 1; 
            }
            else if (isdigit(c)) continue;

            else return false;    

        }

        return f1 && f2? 1: 0; 
    }
};