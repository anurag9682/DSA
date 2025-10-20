class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int value =0;

        for(auto operation: operations){
            if(operation =="++X" || operation =="X++") value++;
            
            else if(operation == "--X" || operation == "X--") value--;
        }
        return value;
        
    }
};