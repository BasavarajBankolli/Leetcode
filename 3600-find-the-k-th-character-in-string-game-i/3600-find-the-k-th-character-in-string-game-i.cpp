class Solution {
public:
    char kthCharacter(int k) {
        string tmp = "a";

        while (tmp.size() <= k){
            int n = tmp.size();
            for(int i = 0; i < n; i++) {
                int c = (tmp[i] + 1) - 'a';
                tmp.push_back((c % 26) + 'a');
            }
        }

        return tmp[k-1];
        
        
    }
};