class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char, int>sFreq, tFreq;;

        for(auto ch: s){
            sFreq[ch]++;
        }
        for(auto ch: target){
            tFreq[ch]++;
        }
        
        int ans =INT_MAX;
        for(auto it: tFreq){
            ans = min(ans, sFreq[it.first]/it.second);
        }
        return ans;
    }
};