// Problem: Permutation in String
// Made two vectors, to maintain the frequency of each element in the two string, then using a sliding window the size of 
// s1 checked if s2 had the same characters, if yes then it was a permutation of s1, hence solved.

#include<bits/stdc++.h>
using namespace std;

class Q567 {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length()) return false;

        vector<int> s1Freq(26, 0), windowFreq(26, 0);

        for (char c : s1) {
            s1Freq[c - 'a']++;
        }

        for (int i = 0; i < s2.length(); i++) {
            windowFreq[s2[i] - 'a']++;

            if (i >= s1.length()) {
                windowFreq[s2[i - s1.length()] - 'a']--;
            }

            if (windowFreq == s1Freq) {
                return true;
            }
        }
        return false;
    }
};
