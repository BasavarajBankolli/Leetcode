class Solution {
public:
    string clearDigits(string s) {
        stack <char> st;

        for (char c: s) {
            if (isalpha(c)) st.push(c);
            else st.pop();
        }

        string res = "";
        while (!st.empty()) {
            res += st.top();  
            st.pop();
        }

        reverse(res.begin(), res.end());

        return res;

    }
};