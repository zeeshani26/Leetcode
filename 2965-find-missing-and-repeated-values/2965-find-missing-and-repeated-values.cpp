class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_set<int> mySet;
        vector<int> ans(2);
        for (int i = 0; i < n; i++) {

            for (int j = 0; j < n; j++) {
                if (mySet.count(grid[i][j]) > 0) {
                    ans[0] = grid[i][j];
                } else {
                    mySet.insert(grid[i][j]);
                }
            }
        }
        int m = (n * n);
        for (int i = 1; i <= m; i++) {
            if (mySet.count(i) == 0) {
                ans[1] = i;
            }
        }
        return ans;
    }
};