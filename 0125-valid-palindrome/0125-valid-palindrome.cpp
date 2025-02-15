class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.size() - 1;
        while (l < r) {
            while (l < r && !isalnum(s[l])) l++;  // Skip non-alphanumeric
            while (l < r && !isalnum(s[r])) r--;  // Skip non-alphanumeric
            
            if (tolower(s[l]) != tolower(s[r])) return false;
            
            l++;
            r--;
        }
        return true;
    }
};