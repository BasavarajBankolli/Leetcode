class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int prev = height[0], i = 0;
        int res = 0;

        for(int j = 1; j < n; j++){
            if (prev <= height[j]){
                res += (min(height[j], prev) *(j - i - 1));
                res -= accumulate(height.begin() + i + 1, height.begin() + j, 0);
                prev = height[j];
                i = j;
            }    
        }

        prev = height[n - 1];
        int r = n - 1;
        for (int j = n - 2; j >= i; j--) {
            if (height[j] >= prev) {
                res += min(prev, height[j]) * (r - j - 1);
                res -= accumulate(height.begin() + j + 1, height.begin() + r, 0);
                r = j;
                prev = height[j];
            }
        }
        return res; 
    }
};