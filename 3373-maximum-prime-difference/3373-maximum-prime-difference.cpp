class Solution {
public:
    int maximumPrimeDifference(vector<int>& nums) {
        int a[101] = {0};

        for(int i = 2; i < 100; i++) {
            int cnt = 0;
            for(int j = 2; j*j <= i; j++) {
                if(i%j == 0) cnt++;
                if (cnt == 1) break;
            }
            if (!cnt){
                a[i] = 1;
            }
        }

        int n = nums.size();
        int first, last;
        for(int i = 0; i < n; i++) {
            if(a[nums[i]]) {
                first = i;
                break;
            }
        }

        for (int i = n-1; i >= 0; i--) {
            if(a[nums[i]]) {
                last = i;
                break;
            }
        }

        return last - first;
    }
};