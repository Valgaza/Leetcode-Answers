// Problem: Evaluate Reverse Polish Notation
// Push while its an element, if you encounter an operator then pop top two and operate on them.

#include <vector>
#include <string>
#include <stack>

using namespace std;

class Q150 {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for (string& token : tokens) {
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                int b = s.top(); s.pop();
                int a = s.top(); s.pop();
                if (token == "+") s.push(a + b);
                else if (token == "-") s.push(a - b);
                else if (token == "*") s.push(a * b);
                else s.push(a / b);
            } else {
                s.push(stoi(token));
            }
        }
        return s.top();
    }
};
