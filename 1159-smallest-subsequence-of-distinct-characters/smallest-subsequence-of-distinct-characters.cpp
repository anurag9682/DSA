class Solution {
public:
    string smallestSubsequence(string s) {
        stack<char>st;
        unordered_map<char,int>mp;
        set<char>seen;

        for(int i=0;i<s.length();i++){
            mp[s[i]] = i;
        }

        for(int i=0;i<s.length();i++){
            if(seen.find(s[i])!= seen.end()){
                continue;
            }
            while(!st.empty() && st.top()>s[i] &&  mp[st.top()]>i){
                seen.erase(st.top());
                st.pop();
            }
            st.push(s[i]);
            seen.insert(s[i]);
        }
        string ans;
        while(!st.empty()){
            ans = st.top()+ans;
            st.pop();
        }
        return ans;
        
    }
};