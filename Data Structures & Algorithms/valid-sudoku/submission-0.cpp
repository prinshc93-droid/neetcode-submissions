class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // rows, columns, 3x3 boxes
        unordered_set<char> rows[9];
        unordered_set<char> cols[9];
        unordered_set<char> boxes[9];

        for (int r = 0; r < 9; r++) {
            for (int c = 0; c < 9; c++) {

                if (board[r][c] == '.')
                    continue;

                char num = board[r][c];

                // 3x3 box number
                int box = (r / 3) * 3 + (c / 3);

                // Row duplicate
                if (rows[r].count(num))
                    return false;

                // Column duplicate
                if (cols[c].count(num))
                    return false;

                // Box duplicate
                if (boxes[box].count(num))
                    return false;

                rows[r].insert(num);
                cols[c].insert(num);
                boxes[box].insert(num);
            }
        }

        return true;
    }
};