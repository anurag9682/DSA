class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;

        for(int num : stones){
            pq.push(num);
        }

        while(!pq.empty()){
            if(pq.size()==1) return pq.top();

            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();

            if(x!=y){
                pq.push(x-y);
            }
        }
        return 0;
        
    }
};