class Solution {
public:
    int sumOf(int num){
        int sum = 0;
        while(num>0){
            sum+= num%10;
            num/=10;
        }return sum;   
    }

    int maximumSum(vector<int>& nums) {
        unordered_map<int, int> digitSumMap;
        int maxSum = -1;

        for(int num : nums) {
            int digitSum = sumOf(num);
            if(digitSumMap.find(digitSum) != digitSumMap.end()) {
                maxSum = max(maxSum, num + digitSumMap[digitSum]);
                digitSumMap[digitSum] = max(digitSumMap[digitSum], num);
            } else {
                digitSumMap[digitSum] = num;
            }
        }
        return maxSum;    
    }
};