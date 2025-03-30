class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> lastidx(26, -1); 
        
        for (int i = 0; i < s.size(); i++) {
            lastidx[s[i] - 'a'] = i;
        }

        vector<int> res;
        int sz = 0, end = 0;
        
        for (int i = 0; i < s.size(); i++) {
            sz++;
            end = max(end, lastidx[s[i] - 'a']); 
            
            if (i == end) {
                res.push_back(sz);
                sz = 0;
            }
        }

        return res;        
    }
};