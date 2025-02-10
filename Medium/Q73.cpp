// Problem: Set Matrix Zeroes
// Find all 0's and store them, then change all the corresponding rows and cols to zero in place.

#include <bits\stdc++.h>
using namespace std;

class Solution {
    public:
        void setZeroes(vector<vector<int>>& matrix) {
            int m = matrix.size();
            int n = matrix[0].size();
            vector<pair<int, int>> ijpair;
    
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    if (matrix[i][j] == 0) {
                        ijpair.push_back({i, j});
                    }
                }
            }
    
            for (auto& p : ijpair) {
                int row = p.first;
                int col = p.second;
    
                for (int j = 0; j < n; j++) {
                    matrix[row][j] = 0;
                }
    
                for (int i = 0; i < m; i++) {
                    matrix[i][col] = 0;
                }
            }
        }
    };
    