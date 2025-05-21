class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int, vector<int>> pq;

        for(vector<int> &row: matrix) {
            for(int &val:row) {
                
                pq.push(val);
                if(pq.size() > k) {
                    pq.pop();
                }
            }
        }

        return pq.top();

    }
};