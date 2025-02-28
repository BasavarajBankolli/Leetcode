class Solution {
public:
    bool doesValidArrayExist(vector<int>& d) {
        int one = count(d.begin(), d.end(), 1);
        
        return one % 2 == 0;
    }
};