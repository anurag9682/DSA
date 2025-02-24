class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        // for(int i = 0; i < prices.size(); i++){
        //     for(int j = i+1; j < prices.size(); j++){
        //         if(prices[j] <= prices[i]){
        //             prices[i] -= prices[j];
        //             break;
        //         }
        //     }
        // }
        // return prices;

        stack<int> st; 
        int n = prices.size();

        for (int i = 0; i < n; i++) {
            while (!st.empty() && prices[i] <= prices[st.top()]) {
                int idx = st.top();
                st.pop();
                prices[idx] -= prices[i];
            }
            st.push(i);
        }
        return prices;
    }
};