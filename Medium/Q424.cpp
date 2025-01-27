// Problem: Longest Repeating Character Replacement
// Made a unordered_map to store every element and its frequency, then used a MaxFreq variable which maintained which element
// occurs the maximum amount of time in our window. Controlling the right side of the window with a for loop, and the left 
// is controlled with an if statement which is triggered whenever the window size - maxfreq exceeds k. 

#include<bits/stdc++.h>

using namespace std;

class Q424 {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> umap;
        int left = 0;
        int maxFreq = 0;
        int maxLength = 0;

        for (int right = 0; right < s.length(); right++) {

            umap[s[right]]++;
            maxFreq = std::max(maxFreq, umap[s[right]]);

            while ((right - left + 1) - maxFreq > k) {
                umap[s[left]]--;
                left++;
            }
            maxLength = std::max(maxLength, right - left + 1);
        }
        return maxLength;
    }
};