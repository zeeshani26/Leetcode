class Solution {
public:
    int trap(vector<int>& height) {
        // brute force
        // min(max of left of i, max of right of i) - height of i
        // create two arrays
        int n = height.size();
        vector<int> maxLeft(n), maxRight(n);
        int ans = 0;

        // Fill maxLeft
        maxLeft[0] = height[0];
        for (int i = 1; i < n; i++) {
            maxLeft[i] = max(maxLeft[i - 1], height[i]);
        }

        // Fill maxRight
        maxRight[n - 1] = height[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            maxRight[i] = max(maxRight[i + 1], height[i]);
        }

        // Compute trapped water
        for (int i = 0; i < n; i++) {
            ans += min(maxLeft[i], maxRight[i]) - height[i];
        }

        return ans;
    }
};