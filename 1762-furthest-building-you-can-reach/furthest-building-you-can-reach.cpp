class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int,vector<int>, greater<int>>minHeap;

        for(int i=0;i<heights.size()-1;i++){
            int diff = heights[i+1]-heights[i];

            if(diff>0){
                minHeap.push(diff);
                if(minHeap.size()>ladders){
                    if(bricks<minHeap.top()) {
                        return i;
                    }
                bricks -= minHeap.top();
                minHeap.pop();
                }
                
            }
        }
        return heights.size()-1;
    }
};