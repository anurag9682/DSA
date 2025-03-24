class Solution {
public:
    int countDays(int days, vector<vector<int>>& nums) {
        int unvisited = 0, temp = 1;
            sort(nums.begin() , nums.end()); // sorting
            for (auto &queries: nums)
            {
                unvisited += max(0, queries[0] - temp);
                temp = max(temp, queries[1] + 1); // merging queries
                if (temp > days) 
                    break; // break after all days are covered
            }
            return unvisited + max(0, days - temp + 1);
        
    }
};