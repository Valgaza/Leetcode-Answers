// Problem: Find the Number of Distinct Colors Among the Balls
// Took me insane amount of brain power to get this right but finally what I'm doing is maintaining two hashmaps, one of
// my ball:colour pairs and another one of colour:count, adjusting the two if I am to encounted duplicates or changes.

#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        vector<int> queryResults(int limit, vector<vector<int>>& queries) {
            unordered_map<int, int> ballNo;
            unordered_map<int, int> colourCount;
            vector<int> result;
            
            for (int i = 0; i < queries.size(); i++) {
                int ball = queries[i][0];
                int color = queries[i][1];
    
                if (ballNo.find(ball) != ballNo.end()) {
                    int oldColor = ballNo[ball];
                    colourCount[oldColor]--;
    
                    if (colourCount[oldColor] == 0) {
                        colourCount.erase(oldColor);
                    }
                }
    
                ballNo[ball] = color;
                colourCount[color]++;
    
                result.push_back(std::min(ballNo.size(), colourCount.size()));
            }
            return result;
        }
    };
    