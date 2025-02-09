// Problem: Tuple with Same Product
// Calculate the distinct products and how many of each, then apply the mathematical formula of combinations to get the number
// of tuples.

#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        int tupleSameProduct(vector<int>& nums) {
            std::unordered_map<int, int> umap;
            int n = nums.size();
    
            for (int i = 0; i < n; ++i) {
                for (int j = i + 1; j < n; ++j) {
                    int product = nums[i] * nums[j];
                    umap[product]++;
                }
            }
    
            int sum = 0;
    
            for (const auto& pair : umap) {
                int count = pair.second;
                if (count > 1) {
                    sum += (count * (count - 1) / 2) * 8;
                }
            }
    
            return sum;
        }
    };
    

