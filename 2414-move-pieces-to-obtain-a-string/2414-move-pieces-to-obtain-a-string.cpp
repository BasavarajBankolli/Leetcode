class Solution {
public:
    bool canChange(string start, string target) {
        int n = start.length();
        int sidx = 0, tidx = 0;

        while (sidx < n || tidx < n) {
            while (sidx < n && start[sidx] == '_') 
                sidx++;
            while (tidx < n && target[tidx] == '_') 
                tidx++;
            if (sidx == n && tidx == n) 
                return true;
            if (sidx == n || tidx == n) 
                return false;
                
            if (start[sidx] != target[tidx] || 
                (start[sidx] == 'L' && sidx < tidx) || 
                (target[tidx] == 'R' && sidx > tidx)) {
                return false;
            }
            sidx++;
            tidx++;
        }
        return true;
    
    }
};