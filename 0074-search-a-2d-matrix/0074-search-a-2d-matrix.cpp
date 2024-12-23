class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        for (const auto& row : matrix) {

            if (row.front() <= target && row.back() >= target) { 
                int l = 0, r = row.size() - 1;

                while (l <= r) {
                    int mid = l + (r - l) / 2;

                    if (row[mid] == target) {
                        return true; 
                    } 
                    
                    else if (row[mid] < target) {
                        l = mid + 1;
                    } 
                    
                    else {
                        r = mid - 1;
                    }
                }
            }
        }

        return false; 
    }
};
