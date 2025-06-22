class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int n = s.size(), i;

        vector<string> res;
        for(i = 0; i < n; i += k) {
            res.push_back(s.substr(i, k));
        } 

        cout << i << ' ';

        if(n % k){
            string last = res.back();
            int sz = last.size();
            for(int i = 0; i < k - sz; i++) {
                last.push_back(fill);
            }
            res.back() = last;
        }
        
        return res;

    }
};