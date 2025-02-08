class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);
        // Illegal division method
        // Step 1: Calculate the product of all non-zero elements
        int prod = 1;
        int zeroCount = 0; // Count the number of zeros

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                zeroCount++;
            } else {
                prod *= nums[i];
            }
        }

        // Step 2: Fill the result array
        for (int i = 0; i < n; i++) {
            if (zeroCount == 0) {
                // No zeros: divide the total product by nums[i]
                ans[i] = prod / nums[i];
            } else if (zeroCount == 1) {
                // One zero: result is 0 except for the zero element
                if (nums[i] == 0) {
                    ans[i] = prod; // Product of non-zero elements
                } else {
                    ans[i] = 0;
                }
            } else {
                // More than one zero: result is always 0
                ans[i] = 0;
            }
        }

        return ans;
    }
};