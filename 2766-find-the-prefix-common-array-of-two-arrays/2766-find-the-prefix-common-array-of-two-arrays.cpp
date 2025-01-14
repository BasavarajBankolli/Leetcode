class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        const int sz = A.size();

        int ref[51] = {0};
        int cur = 0;
        vector<int> res;
        for (int i = 0; i < sz; i++) {
            ref[A[i] - 1]++;
            ref[B[i] - 1]++;

            cur = 0;
            for (int j = 0; j < sz; j++) {
                if (ref[j] == 2)
                    cur++;
            }
            res.push_back(cur);
        }

        return res;
    }
};