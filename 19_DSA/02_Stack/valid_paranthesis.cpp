#include <iostream>   // optional, only if you want to use cout/cin
#include <string>     // for std::string
#include <stack>      // for std::stack

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(char ch : s) {
            if(ch == '(' || ch == '[' || ch == '{') {
                st.push(ch);
            } else {
                if(st.empty())
                    return false;

                if(ch == ')' && st.top() != '(')
                    return false;

                if(ch == ']' && st.top() != '[')
                    return false;

                if(ch == '}' && st.top() != '{')
                    return false;

                st.pop();
            }
        }

        return st.empty();
    }
};
