// Problem: Max Sum of a Pair With Equal Sum of Digits
//

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
    public:
        int sumOfDigits(int n) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
        }
    
        int maximumSum(vector<int>& nums) {
            unordered_map<int, vector<int>> digitSumMap;
            int maxSum = -1;
    
            for (int num : nums) {
                int digitSum = sumOfDigits(num);
                digitSumMap[digitSum].push_back(num);
            }
    
            for (auto& [digitSum, values] : digitSumMap) {
                if (values.size() > 1) {
                    sort(values.rbegin(), values.rend());
                    maxSum = max(maxSum, values[0] + values[1]);
                }
            }
            return maxSum;
        }
    };