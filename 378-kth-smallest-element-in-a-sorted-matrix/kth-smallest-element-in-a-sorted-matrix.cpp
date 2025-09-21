class Solution {
public:
    void storeElements(priority_queue<int>&maxHeap, vector<int>&row, int k){

        for(auto num: row){
            maxHeap.push(num);
            if(maxHeap.size()>k){
                maxHeap.pop();
            }
        }
    }
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int>maxHeap;

        for(auto row: matrix){
            storeElements(maxHeap, row, k);
        }
        return maxHeap.top();
        
    }
};