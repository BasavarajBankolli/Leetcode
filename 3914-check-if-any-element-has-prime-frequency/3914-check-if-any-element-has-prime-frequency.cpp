class Solution {
public:
    bool isPrime(int n) {
        if (n == 1) return false;

        for(int i = 2; i*i < n; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }
    
    bool checkPrimeFrequency(vector<int>& nums) {
        int a[101] = {0};
        
        for (int num: nums) {
            a[num]++;
        }

        for(int freq: a){
            if (freq && isPrime(freq)){
                return true;
            }
        }
        return false;
    }
};