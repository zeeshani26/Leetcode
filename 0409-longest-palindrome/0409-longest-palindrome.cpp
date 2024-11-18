class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> count;

        for(char c: s){
            count[c] += 1;
        }

        bool odd_found = false;
        int result = 0;
        for(auto& c : count){
            if(c.second % 2 == 0){
                result += c.second;
            }
            else{
                result += c.second - 1;
                odd_found = true;
            }
        }
        if (odd_found){
            return (result+1);
        }
        return result;

    }
};