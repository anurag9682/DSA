class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int a=0,b=0;
        unordered_set<int>s;
        vector<int>ans;
        int n = grid.size();
        int actSum =0, expSum =0;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                actSum+= grid[i][j];
                if(s.find(grid[i][j]) != s.end()){
                    a = grid[i][j];
                    ans.push_back(a);
                }
                s.insert(grid[i][j]);
            }
        }

        expSum = (n*n)*(n*n+1)/2;
        b = expSum+a-actSum;
        ans.push_back(b);
        return ans;

    }
};