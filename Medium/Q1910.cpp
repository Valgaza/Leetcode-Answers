// Remove All Occurrences of a Substring
// Employed indepedant functions which check if a substring is present inside another, another one runs a loop while its
// not present, and the third one does the job of removing the substring if present.

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool containsSubstring(const string& str, const string& substring) {
            return str.find(substring) != string::npos;
        }
        
        string removeOccurrences(string s, string part) {
            while (containsSubstring(s, part)) {
                s = removeSubstring(s, part);
            }
            return s;
        }
    
        string removeSubstring(string parent, const string& sub) {
            size_t pos = parent.find(sub);
            parent.erase(pos, sub.length());
            return parent;
        }
    };
    