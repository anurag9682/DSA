class Solution {
public:
    string clearDigits(string s) {
        stack<char>st;
        string ans;
        for(char ch :s){
            if( isdigit(ch) && !st.empty()){
                st.pop();
            }
            else{
                st.push(ch);
            }
        }
        while(!st.empty()){
            ans+= st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());  // reverse the answer
        return ans;
        
    }
};