class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        if(left == 1) left++;

        vector <int> res = {-1, -1}, ref = {-1,-1};
        int mn = INT_MAX;

        for(int i = left; i <= right; i++) {
            if(prime(i)){
                ref[0] = ref[1];
                ref[1] = i;
            }

            if(ref[0] != -1 && mn > (ref[1] - ref[0])) {
                mn = ref[1] - ref[0];
                res = ref;
            }
        
        }

        return res;
        
    }
private:
    bool prime(int n){
        for(int i = 2; i*i <= n; i++){
            if(n % i == 0) return 0;
        }
        return 1;
    }
};