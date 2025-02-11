class Solution {
public:
    string removeOccurrences(string s, string part) {
        string res;
        int pn = part.size();

        for (char c : s) {
            res.push_back(c);

            if (res.size() >= pn && res.ends_with(part)) {
                res.erase(res.size() - pn);
            }
        }

        return res;
    }
};