class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size()-1;
        int i = n;
        int ans = 0;
        if(i == n && s[i] == ' '){
            while(s[i] == ' '){
                i--;
            }
        }
        if(s[i] != ' '){
            while(i>=0 && s[i] != ' '){
                i--;
                ans++;
            }
        }
        return ans;
    }
};