class Solution {
public:
    int maxDistance(vector<int>& colors) {

        //......Brute Approach..........

        int ans =0;
        for(int i = 0; i<colors.size(); i++){
            for(int j =0 ; j<colors.size(); j++){

                if(colors[i] != colors[j]){
                    ans = max(ans, abs(i-j));
                }
            }
        }
        return ans;
        
    }
};