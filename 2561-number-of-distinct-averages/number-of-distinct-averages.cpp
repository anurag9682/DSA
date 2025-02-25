class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        int left =0, right= nums.size()-1;

        sort(nums.begin(),nums.end());
        set<float>mySet;

        while(left<right){
            long double avg = (nums[left]+nums[right])/2.0;
            mySet.insert(avg);
            left++;
            right--;
        }
        return mySet.size();
    }
};