// Problem: Reverse Bits
// Learnt how to use AND and OR operators in cpp
#include <iostream>
#include <cstdint>

using namespace std;

class Solution {
public:
    uint32_t reverseBits(uint32_t num) {
        uint32_t result = 0;
        
        for (int i = 0; i < 32; i++) {
            int lastBit = num & 1;

            result = result << 1;
            result = result | lastBit;

            num >>= 1;
        }
        return result;
    }
};