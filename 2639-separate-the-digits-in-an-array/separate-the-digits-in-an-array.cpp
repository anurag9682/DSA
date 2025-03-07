class Solution {
public:
    void push_Num(int num, vector<int>&ans){
        vector<int>temp;
        while(num>0){
            temp.push_back(num%10);
            num/=10;
        }
        reverse(temp.begin(), temp.end());
        ans.insert(ans.end(),temp.begin(),  temp.end());

    }

    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;

        for(int num: nums){
            push_Num(num, ans);
        }
        return ans;
        
    }
};