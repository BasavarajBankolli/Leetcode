class Solution {
public:
    int isPrefixOfWord(string s, string sw) {
        int m = sw.size();
        int res = 0;
        
        stringstream ss(s);
        string word;

        while (ss >> word){
            res ++;
            if (word.size() >= m && word.substr(0, m) == sw){
                return res;
            }
        }

        return -1;

    }
};