class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int tmp[7] = {0};

        for (int i = 0; i < tops.size(); i++) {
            tmp[tops[i]]++;
            tmp[bottoms[i]]++;
        }      

        int mx = 0, val = 0;
        for(int i = 0; i < 7; i++) {
            if(mx < tmp[i]){
                mx = tmp[i];
                val = i;
            }
        }
        
        int cnt1 = 0, cnt2 = 0;
        for(int i = 0; i < tops.size(); i++) {
            if(tops[i] != val && bottoms[i] == val)cnt1++;
            else if (tops[i] != val && bottoms[i] != val) return -1;
        }
        
        
        for(int i = 0; i < tops.size(); i++) {
            if(bottoms[i] != val && tops[i] == val)cnt2++;
        }
        
        return min(cnt1, cnt2);     
    
    }
};