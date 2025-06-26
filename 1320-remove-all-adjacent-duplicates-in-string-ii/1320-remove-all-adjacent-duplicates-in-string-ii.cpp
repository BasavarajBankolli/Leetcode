class Solution {
public:
    
    string removeDuplicates(string s, int k) {
        stack<pair<char, int>> st;

        for (char c : s) {
            if (!st.empty() && st.top().first == c) {
                st.top().second++;
            } else {
                st.push({c, 1});
            }

            if (st.top().second == k) {
                st.pop();
            }
        }

        string res = "";
        while (!st.empty()) {
            auto [ch, cnt] = st.top();
            st.pop();
            res = string(cnt, ch) + res; 
        }

        return res;
    }
};