class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st1;
        stack<char>st2;
        // Process string s
        for (char c : s) {
            if (c == '#' && !st1.empty()) {
                st1.pop();
            } else if (c != '#') {
                st1.push(c);
            }
        }

        // Process string t
        for (char c : t) {
            if (c == '#' && !st2.empty()) {
                st2.pop();
            } else if (c != '#') {
                st2.push(c);
            }
        }

        return st1 == st2;
    }
};