class Solution {
public:
    int maxArea(vector<int>& height) {
         int n = height.size();
        int l=0, r=n-1;
        int maxW=0, curW=0;
        while(l<r){
            int w = r-l;
            int ht = min(height[l], height[r]);
            curW= ht*w;
            maxW = max(maxW,curW);

            height[l]<height[r]? l++ : r--;
        }
        return maxW;
        
    }
};