class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int mp[101] = {0};

        for (int a: nums){
            mp[a]++;
        }

        vector<int> v;
        for (int f: mp){
            if (f) v.push_back(f);
        }

        int mx = *max_element(v.begin(), v.end());
        return mx * (count(v.begin(), v.end(), mx));

    }
};