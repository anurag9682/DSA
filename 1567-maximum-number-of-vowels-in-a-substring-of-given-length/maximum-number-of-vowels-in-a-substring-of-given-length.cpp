class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    int maxVowels(string s, int k) {
        int count = 0, ans = 0;

        // Check the first k characters
        for (int i = 0; i < k; i++) {
            if (isVowel(s[i])) count++;
        }
        ans = count;

        // Slide the window
        for (int i = k; i < s.length(); i++) {
            if (isVowel(s[i])) count++;   // Add new character
            if (isVowel(s[i - k])) count--; // Remove old character
            ans = max(ans, count);
        }
        
        return ans;
        
    }
};