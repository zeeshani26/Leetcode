class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
               sort(g.begin(), g.end()); 
        sort(s.begin(), s.end());
        int p = 0, t = 0, ans = 0;

        int nump = g.size();
        int numt = s.size();
        
        while (p < nump && t < numt) {
            if (g[p] <= s[t]) {
                t++;
                p++;
                ans++;
            } else {
                t++;
            }
        } 
        return ans;
  
    }
};