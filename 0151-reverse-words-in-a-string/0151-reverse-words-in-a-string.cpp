class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int i = n - 1;
        string word = "", ans = "";

        while (i >= 0) {
            if (s[i] == ' ') {
                if (!word.empty()) {  // to check if word is empty
                    // If we have collected a word, append it to the answer
                    ans += word + " ";
                    word = ""; // Reset word to collect the next one
                }
            } else {
                // Add characters to initial of the word
                word = s[i] + word;
            }
            i--;
        }

        // Add the last word to the answer (if it exists)
        if (!word.empty()) {
            ans += word;
        }

        // Remove trailing space (if any)
        if (!ans.empty() && ans.back() == ' ') {
            ans.pop_back();
        }

        return ans;
    }
};