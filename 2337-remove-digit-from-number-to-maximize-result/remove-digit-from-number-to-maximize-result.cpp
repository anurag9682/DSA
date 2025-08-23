class Solution {
public:
    string removeDigit(string number, char digit) {
        string ans = "";
        for(int i = 0;i<number.length();i++){
            string cur ="";
            if(number[i]==digit){
                cur = number.substr(0,i)+number.substr(i+1);
            }
            ans = max(ans,cur);
        }
        return ans;
    
        
    }
};