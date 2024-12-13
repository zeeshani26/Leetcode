class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int threshold) {
        int n = height.size();
        vector<int> ans;
        ans.reserve(n); // Reserve space to avoid dynamic resizing
        for (int i = 1; i < n; ++i) {
            if (height[i - 1] > threshold) {
                ans.push_back(i); // Add index i if the condition is satisfied
            }
        }
        return ans;
    }
};