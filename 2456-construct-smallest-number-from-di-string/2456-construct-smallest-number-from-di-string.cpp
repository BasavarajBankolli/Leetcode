class Solution {
public:
    string smallestNumber(string pat) {
        string res = "";
        vector <int> st;

        for (int i=0; i<=pat.size(); i++) {
            st.push_back(i+1);

            if (i == pat.size() || pat[i] == 'I'){
                while (!st.empty()){
                    res += (to_string(st.back()));
                    st.pop_back();
                }
            }
        }
        return res;
    }
};
