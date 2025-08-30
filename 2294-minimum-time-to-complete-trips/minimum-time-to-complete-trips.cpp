class Solution {
public:
    bool canTrip(vector<int>& time, int totalTrips, long long mid){
        long long trips = 0;
        for(int t:time){
            trips+= mid/t;
            if(trips>=totalTrips) return true;
        }
        return trips>=totalTrips;

    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long low = LLONG_MAX;
        for(int t:time){
            low = min(low,1LL*t);
        }
        long long high =  low*totalTrips;

        while(low<=high){
            long long mid = low+(high-low)/2;

            if(canTrip(time, totalTrips, mid)){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return low;
    }
};