class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int count =0;

        for(int i = left ;i<=right;i++){
            string str = words[i];
            if(str[0]=='a' ||str[0]=='e'|| str[0]=='i'||str[0]=='o'||str[0]=='u'){
                
                int n = str.length()-1;
                if(str[n]=='a' ||str[n]=='e'|| str[n]=='i'||str[n]=='o'||str[n]=='u'){
                    count++;
                }
            }
        }
        return count;
        
    }
};