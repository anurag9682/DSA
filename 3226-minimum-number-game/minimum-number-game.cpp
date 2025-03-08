class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>>minQ;
        vector<int>ans;

        for(int num: nums){
            minQ.push(num);
        }

        while(!minQ.empty()){
            int alice = minQ.top();
            minQ.pop();
            int bob = minQ.top();
            minQ.pop();
            ans.push_back(bob);
            ans.push_back(alice);
        }
        return ans;
    }
};