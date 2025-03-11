class Solution {
public:
    int numberOfSubstrings(string s) {
        int res = 0, j = 0;
        int cnt = 0, n = s.size();

        unordered_map<char, int> mp;

        for (int i = 0; i < n; i++) {
            
            if (mp[s[i]] == 0) cnt++;
            mp[s[i]]++;

            while (cnt == 3){
                res += n - i; 
                mp[s[j]]--;
                if (mp[s[j]] == 0) cnt--;
                j++;
            }
        }

        return res;

    }
};