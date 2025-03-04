class Solution {
public:
    bool checkPowersOfThree(int n) {
        map<int, int> degree = {{16, 43046721}, {15, 14348907}, {14, 4782969}, 
         {13, 1594323}, {12, 531441},{11, 177147}, {10, 59049}, {9, 19683}, {8, 6561},
         {7, 2187}, {6, 729}, {5, 243}, {4, 81}, {3, 27}, {2, 9}, {1, 3}, {0, 1}
        };

        for (auto it = degree.rbegin(); it != degree.rend(); ++it) {  
            if (it->second <= n) {
                n -= it->second;
            }
        }

        return n == 0;

    }
};