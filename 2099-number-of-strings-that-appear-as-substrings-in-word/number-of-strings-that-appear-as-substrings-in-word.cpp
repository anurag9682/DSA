class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count =0;

        for(auto sub: patterns){
            if(word.find(sub) != string::npos) count++;
        }
        return count;
    }
};