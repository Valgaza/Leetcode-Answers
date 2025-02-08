// Problem: Reverse Image
// 2 approaches, either I transpose the matrix and then reverse each row, or I reverse the entire matrix and then transpose.

#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void rotate(std::vector<std::vector<int>>& matrix) {
        std::reverse(matrix.begin(), matrix.end());

        for (int i = 0; i < matrix.size(); ++i) {
            for (int j = i + 1; j < matrix[i].size(); ++j) {
                std::swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
};
