class Solution {
public:
    int minCapability(vector<int>& nums, int k) {
        int l = nums[0], r = nums[0];
        
        for(int a:nums){
            l = min(l,a);
            r = max(r,a);
        }

        int res = 0;
        while (l <= r){
            int mid = l + (r-l)/2;
            if (is_exist(nums, k, mid)){
                res = mid;
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }

        }
        return res;
    }
private:
    int is_exist(vector<int> &a, int k, int val){
        int i = 0,  cnt = 0;
        while (i<a.size()) {
            if(a[i] <= val){
                cnt++;
                i += 2;
            }
            else{
                i += 1;
            }
            if (cnt == k) return 1;
        }
        return 0;
    }
};