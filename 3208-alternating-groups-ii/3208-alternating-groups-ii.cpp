class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int n = colors.size();
     
        int count = 1;
        int ans = 0;
        for (int i = 1; i <= n - 1 + k - 1; i++) {
            if (colors[i%n] != colors[(i-1+n)%n]) {
                count++;

            } else {
                count = 1;
            }
            if (count >= k) {
                ans++;
            }
        }
        return ans;
    }
};