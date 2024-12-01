class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int, int> freq;
        int n = arr.size();

        for (int i = 0; i < n; ++i) {
            int current = arr[i];
            if (freq.count(current * 2) || (current % 2 == 0 && freq.count(current / 2))) {
                return true;
            } else {
                freq[current]++;
            }
        }

        return false;
    }
};