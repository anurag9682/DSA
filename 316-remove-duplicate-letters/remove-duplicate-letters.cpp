class Solution {
public:
    string removeDuplicateLetters(string s) {
        set<char>seen;
        unordered_map<char, int>mp;
        stack<char>st;

        for(int i=0;i<s.length();i++){
            mp[s[i]] = i;  // store the the last index
        }

        for(int i=0;i<s.length();i++){
            if(seen.find(s[i])!= seen.end()){
                continue; // if already present then skip the letter
            }

            while(!st.empty() && st.top()>s[i] && mp[st.top()]>i){ 
                seen.erase(st.top());
                st.pop();
            }

            seen.insert(s[i]);
            st.push(s[i]);
        }

        string ans;
        while(!st.empty()){
            ans = st.top()+ans;
            st.pop();
        }
        return ans;


    }
};