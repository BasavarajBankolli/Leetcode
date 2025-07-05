class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> mp;
        int res = -1;
        
        for(int i = 0; i < arr.size(); i++) {
            mp[arr[i]]++;
        }

        for(int i = 0; i < arr.size(); i++) {
            if(mp[arr[i]] == arr[i] && arr[i] > res) res = arr[i];
        }

        return res;
    }
};