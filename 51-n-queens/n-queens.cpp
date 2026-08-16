class Solution {
public:

    bool isSafe(int row, int col, vector<string>& board, int n) {

        // Check upper-left diagonal
        int r = row - 1;
        int c = col - 1;

        while (r >= 0 && c >= 0) {
            if (board[r][c] == 'Q')
                return false;

            r--;
            c--;
        }

        // Check upper-right diagonal
        r = row - 1;
        c = col + 1;

        while (r >= 0 && c < n) {
            if (board[r][c] == 'Q')
                return false;

            r--;
            c++;
        }

        // Check same column
        r = row - 1;

        while (r >= 0) {
            if (board[r][col] == 'Q')
                return false;

            r--;
        }

        return true;
    }

    void solve(int row, vector<string>& board,
               vector<vector<string>>& ans, int n) {

        // All queens placed
        if (row == n) {
            ans.push_back(board);
            return;
        }

        // Try every column in current row
        for (int col = 0; col < n; col++) {

            if (isSafe(row, col, board, n)) {

                // Choose
                board[row][col] = 'Q';

                // Recurse
                solve(row + 1, board, ans, n);

                // Backtrack
                board[row][col] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {

        vector<vector<string>> ans;

        vector<string> board(n, string(n, '.'));

        solve(0, board, ans, n);

        return ans;
    }
};