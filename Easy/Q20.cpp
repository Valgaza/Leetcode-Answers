// Problem: Valid Parantheses
// Straight forward problem, just use a stack to check.

#include <bits/stdc++.h>

using namespace std;

class Q20 {
public:
    bool isValid(string s) {
        std::stack<char> st;

        for(char c : s){
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } 
            else {
                if (st.empty()) return false;

                if ((c == ')' && st.top() != '(') ||
                    (c == '}' && st.top() != '{') ||
                    (c == ']' && st.top() != '[')) {
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};
