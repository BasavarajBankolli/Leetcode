class Solution {
public:
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        vector<set<char>> fst(26);
        for (int i = 0; i < 26; i++) {
            fst[i].insert('a' + i);
        }

        for (int i = 0; i < s1.length(); i++) {
            int a = s1[i] - 'a';
            int b = s2[i] - 'a';

            if (fst[a] == fst[b]) continue;

            set<char> merged = fst[a];
            merged.insert(fst[b].begin(), fst[b].end());

            char rep = *merged.begin();

            for (char ch : merged) {
                fst[ch - 'a'] = merged;
            }
        }

        string res = "";
        for (char c: baseStr){
            res += *fst[c-'a'].begin();
        }

        return res;
    }
};