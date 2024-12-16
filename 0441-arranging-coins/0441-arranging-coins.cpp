class Solution {
public:
    int arrangeCoins(int n) {
        // Brute Force optimized
        int ans = 0;
        while (n >= ans + 1) {
            ans++;
            n = n - ans;
        }
        return ans;
    }
};