// Problem: Single Number
// Learnt how to use bitwise operators in cpp, was mind blown, here it was XOR.

#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums){
    int ans = 0;

    for (int num : nums){
        ans ^= num;
    }
    return ans;
    }
};