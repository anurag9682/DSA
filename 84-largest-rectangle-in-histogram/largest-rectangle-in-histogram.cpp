class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int>left(n,0);
        vector<int>right(n,0);
        stack<int>s;

        //right smaller
        for(int i=n-1; i>=0;i--){
            while(s.size()>0 && heights[s.top()]>=heights[i]){
                s.pop();
            }
            right[i]= s.empty() ? n: s.top();
            s.push(i);
        }

        // Clear stack before computing left smaller indices
        while (!s.empty()) s.pop();

        //left smaller
        for(int i=0; i<n; i++){
            while(s.size()>0 && heights[s.top()]>= heights[i]){
                s.pop();
            }
            left[i]= s.empty() ? -1: s.top();
            s.push(i);
        }

        int ans =0;
        for(int i=0; i<n; i++){
            int width = right[i]-left[i]-1;
            int curArea = heights[i]*width;
            ans = max(ans, curArea);
        }
        return ans;  
    }
};