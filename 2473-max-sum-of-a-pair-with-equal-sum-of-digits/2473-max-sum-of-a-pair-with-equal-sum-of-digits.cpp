class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map <int, vector <int>> mp;

        int sum, tmp;
        for (int a: nums) {
            tmp = a;
            sum = 0;

            while (a) {
                sum += a % 10;
                a /= 10;
            }

            mp[sum].push_back(tmp);
        }

        int mx = -1;
        for (auto v: mp) {
            vector <int> ref = v.second;

            if (ref.size() > 1) {
                sort(ref.rbegin(), ref.rend());
                mx = max(mx, ref[0]+ref[1]);
            }
        }
        
        return mx;
    }
};