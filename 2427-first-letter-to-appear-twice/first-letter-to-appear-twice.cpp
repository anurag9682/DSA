class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<char>seen;
        // char ans = '';
        int idx =0;

        for(int i =0;i<s.length();i++){
            if(seen.find(s[i])!= seen.end()){
                idx = i;
                break;
            }
            seen.insert(s[i]);
        }
        return s[idx];
        
    }
};