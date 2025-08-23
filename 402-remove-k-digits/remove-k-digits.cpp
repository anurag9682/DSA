class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        for (char cur : num) {
            while (!st.empty() && st.top() > cur && k > 0) {
                st.pop();
                k--;
            }
            st.push(cur);
        }

        while (k > 0 && !st.empty()) {
            st.pop();
            k--;
        }

        // Instead of building by prepending, collect in reverse
        string ans;
        ans.reserve(st.size()); // reserve memory to avoid reallocations
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        // Now reverse it
        reverse(ans.begin(), ans.end());

        // Remove leading zeros
        int i = 0;
        while (i < ans.size() && ans[i] == '0') i++;
        ans = ans.substr(i);

        return ans.empty() ? "0" : ans;
    }
};
