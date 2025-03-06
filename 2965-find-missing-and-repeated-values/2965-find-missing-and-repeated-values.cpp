class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = n * n;
        vector<bool> seen(m + 1, false); 
        vector<int> ans(2);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int val = grid[i][j];

                if (seen[val]) {
                    ans[0] = val; 
                }
                seen[val] = true;
            }
        }

        for (int i = 1; i <= m; i++) {
            if (!seen[i]) {
                ans[1] = i; 
                break; 
            }
        }

        return ans;
    }
};
