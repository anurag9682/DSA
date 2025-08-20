class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        for(auto astro: asteroids){
            bool isAlive = true;

            while(!st.empty() && astro<0 && st.top()>0){
                int lastAstro = st.top();
                st.pop();
                if(lastAstro== abs(astro)){
                    isAlive = false;
                    break;

                }else if(lastAstro> abs(astro)){
                    st.push(lastAstro);
                    isAlive = false;
                    break;
                }
                
            }
            if(isAlive){
                    st.push(astro);
                }
        }
        vector<int>ans(st.size());
            for(int i = ans.size()-1; i>=0;i--){
                ans[i] = st.top();
                st.pop();
            }
            return ans;
    }
};