class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        int n = operations.size();
        for(string& op: operations){
            if(op=="C") st.pop();
            
            else if(op=="D"){
                int x = (st.top());
                st.push(2*x);
            }
            else if(op=="+"){
                int x = st.top();
                st.pop();
                int y = st.top();
                int sum = x+y;
                st.push(x);
                st.push(sum);
            }else{
                st.push(stoi(op));
            }
            
        }
        long long sum =0;
        while(!st.empty()){
            sum+= st.top();
            st.pop();
        }
        return sum;
        
    }
};