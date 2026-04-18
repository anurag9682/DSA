class Solution {
public:
    int mirrorDistance(int n) {
        int temp = n;
        int mirrorNum=0;

        while(temp>0){
            
            mirrorNum = (mirrorNum*10)+temp%10;
            temp/=10; 
        }
        return abs(n-mirrorNum);
        
    }
};