#include <iostream>
#include <vector>
#include <cmath>

class SudokuSolver {
public:
    static void display(const std::vector<std::vector<int>>& board) {
        for (const auto& row : board) {
            for (int num : row) {
                std::cout << num << " ";
            }
            std::cout << std::endl;
        }
    }

    static bool isSafe(const std::vector<std::vector<int>>& board, int row, int col, int num) {
        for (int i = 0; i < board.size(); i++) {
            if (board[row][i] == num) {
                return false;
            }
        }

        for (const auto& nums : board) {
            if (nums[col] == num) {
                return false;
            }
        }

        int sqrtN = static_cast<int>(std::sqrt(board.size()));
        int rowStart = row - row % sqrtN;
        int colStart = col - col % sqrtN;

        for (int r = rowStart; r < rowStart + sqrtN; r++) {
            for (int c = colStart; c < colStart + sqrtN; c++) {
                if (board[r][c] == num) {
                    return false;
                }
            }
        }
        return true;
    }

    static bool solve(std::vector<std::vector<int>>& board) {
        int n = board.size();
        int row = -1;
        int col = -1;
        bool emptyLeft = true;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == 0) {
                    row = i;
                    col = j;
                    emptyLeft = false;
                    break; // Break the inner loop when you find a 0.
                }
            }

            if (!emptyLeft) {
                break; // Break the outer loop when you've already broken out of the inner loop.
            }
        }

        if (emptyLeft) {
            return true; // Sudoku is solved
        }

        for (int number = 1; number <= 9; number++) {
            if (isSafe(board, row, col, number)) {
                board[row][col] = number;
                if (solve(board)) {
                    return true;
                } else {
                    board[row][col] = 0;
                }
            }
        }
        return false;
    }
};

int main() {
    std::vector<std::vector<int>> board = {
        {8, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 3, 6, 0, 0, 0, 0, 0},
        {0, 7, 0, 0, 9, 0, 2, 0, 0},
        {0, 5, 0, 0, 0, 7, 0, 0, 0},
        {0, 0, 0, 0, 4, 5, 7, 0, 0},
        {0, 0, 0, 1, 0, 0, 0, 3, 0},
        {0, 0, 1, 0, 0, 0, 0, 6, 8},
        {0, 0, 8, 5, 0, 0, 0, 1, 0},
        {0, 9, 0, 0, 0, 0, 4, 0, 0}
    };

    if (SudokuSolver::solve(board)) {
        SudokuSolver::display(board);
    } else {
        std::cout << "Cannot be Solved" << std::endl;
    }
    return 0;
}
