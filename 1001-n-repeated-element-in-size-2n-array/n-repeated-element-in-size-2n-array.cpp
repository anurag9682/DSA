class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        // unordered_map<int,int> freq;
        // int n = nums.size()/2;

        // for(auto num: nums){
        //     freq[num]++;

        //     if(freq[num]==n) return num;
        // }
        // return -1;
        

        //.....Using set...........

        unordered_set<int>seen;
        for(int num: nums){

            if(seen.count(num)) return num;
            seen.insert(num);
        }
        return -1;
    }
};