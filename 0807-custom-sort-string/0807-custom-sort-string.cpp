class Solution {
public:
    string customSortString(string order, string s) {

        unordered_map<char, int>mpp;

        for(int i = 0; i < s.size(); i++)
        {
            mpp[s[i]]++;
        }
        string ans = "";

        for(int i = 0; i < order.size(); i++)
        {
            if(mpp[order[i]] > 0)
            {
                while(mpp[order[i]] != 0)
                {
                    ans = ans + order[i];
                    mpp[order[i]]--;
                }
            }
        }

        for(int i = 0; i < s.size(); i++)
        {
            if(mpp[s[i]] > 0)
            {
                ans = ans + s[i];
                mpp[s[i]]--;
            }
        }

        return ans;
        
    }
};