class Solution {
public:
    int halveArray(vector<int>& nums) {
        double sum = accumulate(nums.begin(), nums.end(), 0.0), half = sum/2;
        
        priority_queue<double> pq;
        
        for (int a: nums) {
            pq.push((double)a);
        }

        int cnt = 0; double tmp;
        while (sum > half){
            cnt ++;
            tmp = pq.top();
            tmp /= 2;
            sum -= tmp;
            pq.pop();
            pq.push(tmp);
        }  

        return cnt;


    }
};