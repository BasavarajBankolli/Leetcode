class Solution {
public:
    string removeDuplicates(string s, int k) {
        vector<char> st;

        for(char c: s){
            st.push_back(c);

            if(!st.empty() && st.size() >= k){
                int n = st.size()-1;
                char top = st[n];
                int cnt = 1;
                for(int i = 1; i < k; i++) {
                    if(st[n-i] == top){
                        cnt++;
                    }
                }

                if (cnt == k) {
                    for (int i = 0; i < k; i++) {
                        st.pop_back();
                    }
                }
                
            }
        }


        string res = "";
        for(int i = 0; i < st.size(); i++) {
            res.push_back(st[i]);
        }

        return res;

    }
};