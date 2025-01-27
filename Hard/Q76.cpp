// Problem: Minimum Window Substring
// Took a lot of brain storming for this one, one hashmap to maintain the frequency of each element in t, then to check 
// this hashmap against various windows within s, firstly right is incremented until all elements of t are covered, 
// then left is incremented to remove unnecessary elements, and then this window is checked againt the smallest window
// available and this process goes on until right = s.length() - 1.

#include <bits/stdc++.h>

using namespace std;

class Q76 {
public:
    string minWindow(string s, string t) {
        if (t.length() > s.length()) return "";

        unordered_map<char, int> t_umap;
        for (char c : t) t_umap[c]++;

        int left = 0, minLength = INT_MAX, startIndex = 0;
        int required = t_umap.size();
        int formed = 0;

        for (int right = 0; right < s.length(); right++) {
            char rightChar = s[right];

            if (t_umap.count(rightChar)) {
                t_umap[rightChar]--;
                if (t_umap[rightChar] == 0) {
                    formed++;
                }
            }

            while (formed == required) {
                if (right - left + 1 < minLength) {
                    minLength = right - left + 1;
                    startIndex = left;
                }

                char leftChar = s[left];
                if (t_umap.count(leftChar)) {
                    if (t_umap[leftChar] == 0) {
                        formed--;
                    }
                    t_umap[leftChar]++;
                }
                left++;
            }
        }

        return (minLength == INT_MAX) ? "" : s.substr(startIndex, minLength);
    }
};
