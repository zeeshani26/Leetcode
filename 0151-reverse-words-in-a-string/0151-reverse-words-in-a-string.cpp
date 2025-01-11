class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int i = n - 1;
        string word = "", ans = "";

        while (i >= 0) {
            if (s[i] == ' ') {
                if (word.empty() == false) {// to ensure no zsubsequent space
                    // If we have collected a word, append it to the answer
                    ans += word + " ";
                    word = ""; 
                }
            } else {
                word = s[i] + word;
            }
            i--;
        }

        // Add the last word to the answer (if it exists)
        if (word.empty() == false) {
            ans += word;
        }

        // Remove trailing space (if any)
        if (ans.empty() == false && ans.back() == ' ') {
            ans.pop_back();
        }

        return ans;
    }
};
