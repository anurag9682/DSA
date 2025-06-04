class Solution {
public:
    string answerString(string word, int numFriends) {
        if (numFriends == 1) return word;

        int n = word.size();
        int len = word.length();
        string res = "";

        for (int i = 0; i < n; ++i) {
            string sub = word.substr(i, min(len - numFriends + 1, n - i));
            if (sub > res) res = sub;
        }

        return res;
    }
};