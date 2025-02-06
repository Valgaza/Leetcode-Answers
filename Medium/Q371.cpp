// Problem: Sum of Two Integers
// Critical concepts, learnt how you can compute carry by using AND, and how you can compute addition without carry using
// XOR.

#include <iostream>
using namespace std;

class Solution {
public:
    int getSum(int a, int b) {

    while (b != 0) {
        int carry = (a & b) << 1;
        a = a ^ b;
        b = carry;
    }
    return a;
    }
};