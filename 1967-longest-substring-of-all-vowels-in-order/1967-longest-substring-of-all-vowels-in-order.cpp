class Solution {
public:
    int longestBeautifulSubstring(string word) {
        int mx = 0, st = 0;
        int cnt = 1,i;
        
        for (i = 1; i < word.size(); i++) {
            
            if(word[i] > word[i-1]) cnt++;
            else if(word[i] < word[i-1]) {
                if (cnt == 5)
                    mx = max(mx, i-st);
                    
                st = i;
                cnt = 1;
            }

        }

        if (cnt == 5)
            mx = max(mx, i-st);

        return mx;
    }
};