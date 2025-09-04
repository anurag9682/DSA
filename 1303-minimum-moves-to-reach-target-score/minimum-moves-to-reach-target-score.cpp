class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int count=0;

        while(target!=1){
            if(maxDoubles>0 && target%2==0){
                target/=2;
                maxDoubles-=1;
            }else if(maxDoubles>0 && target%2==1){
                target-=1;
            }else{
                count+= (target-1);
                break;
            }
            count++;
        }
        return count;
        
    }
};