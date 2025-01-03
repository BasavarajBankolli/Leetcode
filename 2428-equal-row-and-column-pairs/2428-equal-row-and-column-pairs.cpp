class Solution {
struct VectorHash {
    size_t operator()(const vector<int>& vec) const {
        size_t hash = 0;
        for (int num : vec) {
            hash ^= hash * 31 + hash + num;
        }
        return hash;
    }
};
public:
    int equalPairs(vector<vector<int>>& grid) {
        unordered_map<vector<int>, int, VectorHash> mp; // Use custom hash function
        int n = grid.size();

        // Count the frequency of each row
        for (const auto& row : grid) {
            mp[row]++;
        }

        // for each columns..
        int res = 0;
        for (int col = 0; col < n; ++col) {
            vector<int> column;
            for (int row = 0; row < n; ++row) {
                column.push_back(grid[row][col]);
            }
            if (mp.count(column)) {
                res += mp[column];
            }
        }

        return res;
    }
};

