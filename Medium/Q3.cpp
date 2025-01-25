// Problem: Longest Substring Without Repeating Characters
// Easy solution but took longer than expected to solve because I waas fixated on a particular idea of using count instead
// of realising that I could just use a start variable to maintain the start position and then eventually subtract it with 
// my current position to find the size and then compare the size with the maximum.

#include <unordered_map>
#include <string>
using namespace std;

class Q3 {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> hmap;
        int start = 0;
        int maximum = 0;

        for (int i = 0; i < s.length(); i++) {
            if (hmap.find(s[i]) != hmap.end() && hmap[s[i]] >= start) {
                start = hmap[s[i]] + 1;
            }
            hmap[s[i]] = i;                 
            maximum = std::max(maximum, i - start + 1);
        }
        return maximum;
    }
};
