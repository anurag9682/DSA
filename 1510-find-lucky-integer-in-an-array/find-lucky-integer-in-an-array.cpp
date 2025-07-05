class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int>mp;
        for(auto num:arr){
            mp[num]++;
        }
        int ans =-1;
        for(auto num :mp){
            if(num.first == num.second){
                ans = max(ans, num.first); //maximum lucky numbeer
            }
        }
        return ans;
    }
};