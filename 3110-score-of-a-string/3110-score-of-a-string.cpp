class Solution {
public:
    int scoreOfString(string s) {
        int n = s.length();
        if(s.length() == 1){
            return s[0];
        }
        int i=0;
        int j = 1;
        int sum = 0;
        while(j<n){
            sum = sum + abs(s[i]-s[j]);
            i++;
            j++;
        }
        return sum;
    }
};