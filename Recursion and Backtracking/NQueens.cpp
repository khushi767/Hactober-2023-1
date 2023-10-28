#include <iostream>
#include <vector>
using namespace std;

bool isSafe(int row, int col, vector<vector<int>>& board) {
    // Check if there is a queen in the same column
    for (int i = 0; i < row; i++) {
        if (board[i][col] == 1) {
            return false;
        }
    }

    // Check if there is a queen in the upper left diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 1) {
            return false;
        }
    }

    // Check if there is a queen in the upper right diagonal
    for (int i = row, j = col; i >= 0 && j < board.size(); i--, j++) {
        if (board[i][j] == 1) {
            return false;
        }
    }

    // If all checks pass, it is safe to place a queen at the current position
    return true;
}

bool solveNQueens(int row, vector<vector<int>>& board, int n) {
    // Base case: all queens have been placed
    if (row == n) {
        return true;
    }

    // Try placing a queen in each column of the current row
    for (int col = 0; col < n; col++) {
        if (isSafe(row, col, board)) {
            board[row][col] = 1;

            // Recursively try to place the remaining queens
            if (solveNQueens(row+1, board, n)) {
                return true;
            }

            // Backtrack: remove the queen from the current position
            board[row][col] = 0;
        }
    }

    // If no solution was found, return false
    return false;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    // Initialize the board to all zeros
    vector<vector<int>> board(n, vector<int>(n, 0));

    // Call the recursive function to solve the problem
    if (solveNQueens(0, board, n)) {
        // Print the solution
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "No solution found." << endl;
    }

    return 0;
}
