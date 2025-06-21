class Solution {
public:
    int minimumDeletions(string word, int k) {
        int freq[26] = {0};

        for(char c: word){
            freq[c-'a']++;
        }
        
        int res = 1e5;
        for(int v: freq) {
            int del = 0;
            for(int d: freq) {
                del += (d < v) ? d: max(0, d - (v+k));
            }

            res = min(del, res);
        }

        return res;
    }
};