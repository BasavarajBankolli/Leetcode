class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> pref(n,0);
        int ones = boxes[0] == '1';

        for(int i = 1; i < n; ++i){
            pref[i] = pref[i-1] + ones;
            if(boxes[i] == '1') ones++;
        }


        ones = 0;
        int prev = 0;

        for(int i = n-1; i >= 0; --i){
            pref[i] = pref[i] + prev;
            if(boxes[i] == '1'){
                ones++;
            }
            prev += ones;
        }
        
        return pref;
    }
};