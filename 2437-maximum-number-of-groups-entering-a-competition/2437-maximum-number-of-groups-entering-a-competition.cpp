class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        int res = 0;
        sort(grades.begin(), grades.end());
        int grpsz = 1, i = 0;
        while(i + grpsz <= grades.size()) {
                res++;
            i += grpsz;
            grpsz++;
        }

        return res;
    }
};