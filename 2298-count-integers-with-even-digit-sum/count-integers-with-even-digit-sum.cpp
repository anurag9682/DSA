class Solution {
public:
    bool check_even(int num){
        int temp =0;
        while(num>0){
            temp+= num%10;
            num/=10;
        }
        if(temp%2==0) return true;
        return false;
    }

    int countEven(int num) {
        int count =0;
        for(int i =1; i<=num; i++){
            if(check_even(i)){
                count++;
            }
        }
        return count;
        
    }
};