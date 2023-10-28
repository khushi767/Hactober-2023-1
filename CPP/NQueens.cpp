#include <iostream>
#include <vector>

class NQueens {
public:
    static void display(const std::vector<std::vector<bool>>& board) {
        for (const auto& row : board) {
            for (bool element : row) {
                if (element) {
                    std::cout << "Q ";
                } else {
                    std::cout << "X ";
                }
            }
            std::cout << std::endl;
        }
    }

    static bool isSafe(const std::vector<std::vector<bool>>& board, int row, int col) {
        for (int i = 0; i < row; i++) {
            if (board[i][col]) {
                return false;
            }
        }

        int maxLeft = std::min(row, col);
        for (int i = 1; i <= maxLeft; i++) {
            if (board[row - i][col - i]) {
                return false;
            }
        }

        int maxRight = std::min(row, static_cast<int>(board.size()) - col - 1);
        for (int i = 1; i <= maxRight; i++) {
            if (board[row - i][col + i]) {
                return false;
            }
        }

        return true;
    }

    static int queens(std::vector<std::vector<bool>>& board, int row) {
        if (row == board.size()) {
            display(board);
            std::cout << std::endl;
            return 1;
        }
        int count = 0;

        for (int col = 0; col < board.size(); col++) {
            if (isSafe(board, row, col)) {
                board[row][col] = true;
                count += queens(board, row + 1);
                board[row][col] = false;
            }
        }

        return count;
    }
};

int main() {
    std::vector<std::vector<bool>> board(4, std::vector<bool>(4, false));
    std::cout << NQueens::queens(board, 0) << std::endl;
    return 0;
}
