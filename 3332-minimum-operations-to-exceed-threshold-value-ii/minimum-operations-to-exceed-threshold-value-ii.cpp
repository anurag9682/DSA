class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        priority_queue<long long int, vector<long long int>, greater<long long int>>pq;
        for(auto ele : nums){
            pq.push(ele);
        }
        int cnt =0;
        while(pq.top()<k){
            long long int x = pq.top();
            pq.pop();
            long long int y = pq.top();
            pq.pop();
            long long int num = min(x,y)*2+max(x,y);
            pq.push(num);
            cnt++;
        }
        return cnt;
        
    }
};