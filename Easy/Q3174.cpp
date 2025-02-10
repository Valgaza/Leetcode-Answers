// Problem: Clear Digits
// Iterate through the string, if char is digit then pop, otherwise push.

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    string clearDigits(string s) {
        string result;
        for (char c : s) {
            if (isdigit(c)) {
                if (!result.empty()) result.pop_back(); 
            } 
            else result.push_back(c); 
        }
        return result;
    }
};
    