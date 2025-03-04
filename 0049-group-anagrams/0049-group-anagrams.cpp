class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> ag;

        for (const string& word : strs) {
            string sw = word;
            sort(sw.begin(), sw.end());  
            ag[sw].push_back(word);    
        }

        vector<vector<string>> res;
        for (auto& [key, group] : ag) {
            res.push_back(move(group));  
        }

        return res;
    }
};