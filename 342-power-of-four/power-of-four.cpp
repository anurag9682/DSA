class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0) return false;   // If n is non-positive, return false immediately.

        while(n%4==0){  //Keep dividing n by 4 as long as it is divisible.
            n/=4;
        }
        return n==1;  //If after division n becomes 1, return true, meaning n was a power of three. otherwise return false
        
    }
};