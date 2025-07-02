class Solution {
public:
    int possibleStringCount(string word) {
        int count = word.length();

        for(int i=1; i<word.length();i++){
            if(word[i]!=word[i-1]) count--;
        }
        return count;

        
    }
};