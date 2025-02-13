class Solution {
public:
    int halveArray(vector<int>& nums) {
        double sum = accumulate(nums.begin(), nums.end(), 0.0), half = sum/2;
        
        priority_queue<double> pq(nums.begin(), nums.end());

        int cnt = 0; double tmp;
        while (sum > half){
            cnt ++;
            tmp = pq.top();  // access mx value
            tmp /= 2;
            sum -= tmp;
            pq.pop();       // pop that val
            pq.push(tmp);   // again push to pq for further check..
        }  

        return cnt;


    }
};