class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        if(startFuel>= target) return 0;

        int i =0, stops =0;
        int totalDistance = startFuel;

        priority_queue<int>pq;
        int n = stations.size();

        while(totalDistance< target){

            while(i<n && stations[i][0]<= totalDistance){
                pq.push(stations[i][1]);
                i++;
            }
            if(pq.empty()) return -1;

            totalDistance+= pq.top();
            pq.pop();
            stops++;
        }
        return stops;
    }
};