class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        int ha = 0;
        int ans = -1;
         if (m == 0) return 0; // If needle is empty
        if (n < m) return -1;
        while(ha<n){
            int ne = 0;
            if(haystack[ha]==needle[ne]){
                ans = ha;
                while(ha<n && haystack[ha]==needle[ne]){
                    ha++;
                    ne++;
                }
                if(ne != m){
                    ha = ans+1;
                    ans = -1;
                }
                else if(ne==m){
                    return ans;
                }
                
            }
            else{
                ha++;
            }
        }
        return ans;
    }
};