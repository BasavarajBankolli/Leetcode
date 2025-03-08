class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int mn = 100, w = 0, b = 0;
        int i = 0, j = 0;

        while (j < blocks.size()) {
            if (blocks[j] == 'W') w++;
            else b++;
            j++;

            if (w + b == k) {
                mn = min(mn, w);
                if (blocks[i++] == 'W')w--;
                else b--;
            }
        }
        return mn;
    }
};