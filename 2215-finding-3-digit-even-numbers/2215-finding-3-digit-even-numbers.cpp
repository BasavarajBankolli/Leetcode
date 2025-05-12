class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> res;
        vector<int> cnt(10);

        for (int v: digits) cnt[v]++;

        for (int i = 100; i < 1000; i += 2) {
            map<int, int> mp;
            int num = i;
            while (num > 0){
                mp[num%10]++;
                num /= 10;
            }
            bool ok = 1;
            for (auto a: mp) {
                if (cnt[a.first] < a.second) ok = 0; 
            }
            if(ok)res.push_back(i);            
        }

        return res;

    }
};