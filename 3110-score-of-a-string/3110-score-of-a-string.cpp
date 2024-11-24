class Solution {
public:
    int scoreOfString(string s) {
        int n = s.length();
        if(n <= 1){
            return 0;
        }
        int i=0;
        int j = 1;
        int sum = 0;
        while(j<n){
            sum += abs(s[i]-s[j]);
            i++;
            j++;
        }
        return sum;
    }
};