class Solution {
public:
    string reversePrefix(string word, char ch) {

        if (count(word.begin(), word.end(), ch)){ // check  if ch is present in the word 
        
        int idx = word.find(ch); // find the index of the ch in the word

        reverse(word.begin(), word.begin() + idx + 1);  // reverse the word till ch index from begining;
        return word;
        }

        // return the word ch is not present in the word
        return word;     
    }
};