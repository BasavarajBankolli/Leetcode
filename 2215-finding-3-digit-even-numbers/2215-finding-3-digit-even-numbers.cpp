class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> res;
        vector<int> cnt(10);

        for (int v: digits) cnt[v]++;

        for (int i = 100; i < 1000; i += 2) {
            int num = i;
            int h = i/100, t = i/10 % 10, o = i % 10;
            cnt[h]--, cnt[t]--, cnt[o]--;
            if(cnt[h] >= 0 && cnt[t] >= 0 && cnt[o] >=0) res.push_back(i);
            cnt[h]++, cnt[t]++, cnt[o]++;         
        }

        return res;

    }
};