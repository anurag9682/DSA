class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        
        vector<string>ans;

        for(string str1 : queries){
            
            for(string str2 : dictionary){

                int count = 0;
                for(int i =0; i<str1.size(); i++){
                    if(str1[i] != str2[i]){
                        count++;
                    }
                    if(count>2) break;
                }
                if(count <=2){
                    ans.push_back(str1);
                    break;
                }
            }
        }
        return ans;
        
    }
};