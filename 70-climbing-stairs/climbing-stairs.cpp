class Solution {
public:
    int climbStairs(int n) {
        if(n<=1) return 1;

        if(n==2) return 2;
        if(n==3) return 3;
        if(n==4) return 5;
        if(n==5) return 8;

        return climbStairs(n-1)+ climbStairs(n-2);
    }
};