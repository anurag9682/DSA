class Solution {
public:
    int earliestFinishTime(vector<int>& ls, vector<int>& ld, vector<int>& ws, vector<int>& wd) {
         int res = INT_MAX;
    for (int i = 0; i < ls.size(); ++i) {
        for (int j = 0; j < ws.size(); ++j) {
            int a = max(ls[i], 0) + ld[i];
            int b = max(ws[j], a) + wd[j];
            res = min(res, b);
            int c = max(ws[j], 0) + wd[j];
            int d = max(ls[i], c) + ld[i];
            res = min(res, d);
        }
    }
    return res;
        
    }
};