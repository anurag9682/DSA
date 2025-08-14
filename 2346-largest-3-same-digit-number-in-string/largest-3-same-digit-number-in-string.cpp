class Solution {
public:
    string largestGoodInteger(string num) {
        char digit =0;
        string ans = "";
        for(int i=0;i<=num.length()-3;i++){
            if(num[i]==num[i+1] && num[i]==num[i+2]){
                if(num[i]> digit){
                    digit = num[i];
                    ans = string(3,num[i]);
                }
            }
        }
        return ans;  
    }
};