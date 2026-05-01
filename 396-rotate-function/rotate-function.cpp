#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size();

        int totalSum = 0;
        int  currentValue = 0;

        for (int i = 0; i < n; i++) {
            totalSum += nums[i];
            currentValue +=  i*nums[i];
        }

        int answer = currentValue;

        for (int k = 1; k < n; k++) {
            currentValue = currentValue + totalSum -  n*nums[n - k];
            answer = max(answer, currentValue);
        }

        return answer;
    }
};