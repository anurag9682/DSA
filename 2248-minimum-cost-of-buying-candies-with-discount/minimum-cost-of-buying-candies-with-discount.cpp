class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end(), greater<int>());

        int totalCost =0;
        for(int i=0; i<cost.size(); i++){
            if(i%3 != 2){
                totalCost += cost[i];
            }
        }
        return totalCost;
    }
};