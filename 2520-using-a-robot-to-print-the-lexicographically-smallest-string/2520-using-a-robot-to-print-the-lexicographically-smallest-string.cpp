class Solution {
public:
    string robotWithString(string s) {
        int n = s.size();

        vector<char> suf(n + 1);
        suf[n] = 'z'+1;

        for(int i = n-1; i >= 0; i--) {
            suf[i] = min(s[i], suf[i+1]);
        }

        stack<char>st;
        string res = "";
        for(int i = 0; i < n; i++){
            st.push(s[i]);
            char mn = suf[i+1];
            while (!st.empty() && st.top() <= mn){
                res += st.top();
                st.pop();
            }
        }
        return res;
    }
};