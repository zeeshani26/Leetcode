class Solution {
public:
    string removeStars(string s) {
        int i = 0;
        int j = 0;
        int n = s.size();
        for(int i=0; i<n; i++){
            if(s[i] == '*'){
                j--;
            }
            else{
                s[j] = s[i];
                j++;
            }
        }
        string ans = s.substr(0,j);
        return ans;
    }
};