class Solution {
public:
    int compress(vector<char>& chars) {
        int idx = 0, cnt, i = 0;

        while (i < chars.size()) {
            char ch = chars[i]; cnt = 0;

            while(i < chars.size() && chars[i] == ch){
                cnt++, i++;
            }
            chars[idx++] = ch;
            if (cnt > 1){
                string s = to_string(cnt);
                for (char c:s)chars[idx++] = c;
            }
        }

        return idx;
    }
};