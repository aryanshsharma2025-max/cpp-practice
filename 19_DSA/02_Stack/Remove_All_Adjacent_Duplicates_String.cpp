#include <iostream>   // optional, for testing with cout/cin
#include <string>     // for std::string
#include <stack>      // for std::stack
#include <algorithm>  // for std::reverse

using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;

        for(char ch : s) {
            if(!st.empty() && st.top() == ch) {
                st.pop();
            } else {
                st.push(ch);
            }
        }

        string ans = "";
        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
