class Solution {
public:
    int countSegments(string s) {
        if(s == ""){
            return 0;
        }
        int n = s.size();
        int count = 0;
        int i=0;
        while(i<n){
            if (s[i] != ' ' && (i == 0 || s[i - 1] == ' ')) {
                count++;
            }
            i++;
        }
        return count;
    }
};