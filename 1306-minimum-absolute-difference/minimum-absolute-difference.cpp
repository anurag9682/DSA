class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        int minDiff = INT_MAX;

        for(int i=1;i<arr.size();i++){
            minDiff = min(minDiff,abs(arr[i]-arr[i-1]));
        }

        for(int i=1;i<arr.size();i++){
            int diff = abs(arr[i]-arr[i-1]);

            if(diff==minDiff){
                ans.push_back({arr[i-1],arr[i]});
            }
        }
        return ans;
        
    }
};