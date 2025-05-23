class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        int n = grades.size();
        int i;
        for (i=1; i <= n; i++) {
            n -= i;
        }
        return (i-1);
    }
};