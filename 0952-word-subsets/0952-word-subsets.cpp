class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        int maxFreq[26] = {};  

        for (const string& word : words2) {
            int tempFreq[26] = {};
            for (char c : word) {
                tempFreq[c - 'a']++;
            }
            for (int i = 0; i < 26; i++) {
                maxFreq[i] = max(maxFreq[i], tempFreq[i]);
            }
        }

        vector<string> res;

        for (const string& word : words1) {
            int freq[26] = {};
            for (char c : word) {
                freq[c - 'a']++;
            }

            bool done = true;
            for (int i = 0; i < 26; i++) {
                if (freq[i] < maxFreq[i]) {
                    done = false;
                    break;
                }
            }

            if (done) {
                res.push_back(word);
            }
        }

        return res;
    }
};
