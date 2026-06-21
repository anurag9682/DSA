class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int count =0 ;
        sort(costs.begin(), costs.end());

        //Base case
        if(costs[0]> coins) return 0;

        int i =0;
        while(i < costs.size() && coins >=costs[i]){
            count++;
            coins-= costs[i];
            i++;
        }
        return count;    
    }
};