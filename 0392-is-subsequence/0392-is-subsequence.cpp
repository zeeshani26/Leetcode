class Solution {
public:
    bool isSubsequence(string s, string t) {
        // start where its found
        int n = s.size();
        int m = t.size();
        int j = 0;
        for(int i=0;i<n;i++){
            int flag = false;
            while(j<m){
                if(s[i] == t[j]){
                    flag = true;
                    j++;
                    break;
                }
                j++;
            }
            if(flag == false){
                return false;
            }
        }
        return true;

    }
};