class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        int res = 0;

        sort(meetings.begin(), meetings.end());

        int last_start = meetings[0][0];
        int last_end = meetings[0][1];

        if (last_start > 1) 
            res += last_start - 1;

        for (size_t i = 1; i < meetings.size(); i++) {
            int start = meetings[i][0];
            int end = meetings[i][1];

            if (start <= last_end) {
                last_end = max(last_end, end);
            } 
            
            else{
                res += start - last_end - 1;

                last_start = start;
                last_end = end;
            }
        }

        if (last_end < days) 
            res += days - last_end;

        return res;
    }
};
