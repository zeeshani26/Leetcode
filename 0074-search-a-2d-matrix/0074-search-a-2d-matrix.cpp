class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        if (m == 0) return false;
        int n = matrix[0].size();

        // Binary search to find the row
        int low = 0, high = m - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (matrix[mid][0] == target) return true;
            else if (matrix[mid][0] < target) low = mid + 1;
            else high = mid - 1;
        }

        // The target row should be 'high'
        int row = high;
        if (row < 0) return false; // Target is smaller than matrix[0][0]

        // Binary search in the selected row
        low = 0, high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (matrix[row][mid] == target) return true;
            else if (matrix[row][mid] < target) low = mid + 1;
            else high = mid - 1;
        }

        return false;
    }
};
