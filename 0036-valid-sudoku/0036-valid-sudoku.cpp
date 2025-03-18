class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //   rows → This is the vector name (the main container that holds 9
        //   sets).
        // unordered_set<char> → This is the set type (each element inside the
        // vector is a set).
        vector<unordered_set<char>> row(9), column(9), subSection(9);
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char current = board[i][j];

                if (current == '.') {
                    continue;
                }
                // Calculate the box index using (i / 3) * 3 + (j / 3)
                int boxIndex = (i / 3) * 3 + (j / 3);

                if (row[i].count(current) || column[j].count(current) ||
                    subSection[boxIndex].count(current)) {
                    return false;
                }

                row[i].insert(current);
                column[j].insert(current);
                subSection[boxIndex].insert(current);
            }
        }
        return true;
    }
};