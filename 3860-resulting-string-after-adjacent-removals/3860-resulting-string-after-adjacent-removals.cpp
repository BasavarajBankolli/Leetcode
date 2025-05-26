class Solution {
public:
    string resultingString(string s) {
        string st;

        for (char c : s) {
            st.push_back(c);

            while (st.size() > 1 &&
                  ((st.back() - 'a') % 26 == (st[st.size() - 2] - 'a' + 1) % 26 ||
                   (st[st.size() - 2] - 'a') % 26 == (st.back() - 'a' + 1) % 26)) {
                st.pop_back();  // Remove top
                st.pop_back();  // Remove second top
            }
        }

        return st;
    }
};