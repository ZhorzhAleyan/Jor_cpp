#include <iostream>
#include <vector>

void printBoard(const std::vector<std::vector<int>>& board) {
    for (int i = 0; i < 9; i++) {
        if (i % 3 == 0)
            std::cout << "-------------------------" << std::endl;

        for (int j = 0; j < 9; j++) {
            if (j % 3 == 0)
                std::cout << "| ";

            if (board[i][j] == 0)
                std::cout << ". "; 
            else
                std::cout << board[i][j] << " ";
        }
        std::cout << "|" << std::endl;
    }
    std::cout << "-------------------------" << std::endl;
}

bool isSafe(const std::vector<std::vector<int>>& board, int row, int col, int num) {
    for (int x = 0; x < 9; x++) {
        if (board[row][x] == num) return false;
        if (board[x][col] == num) return false;
    }

    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i + startRow][j + startCol] == num)
                return false;

    return true;
}

int main() {
    std::vector<std::vector<int>> board(9, std::vector<int>(9, 0));

    std::cout << std::endl;

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            int num;
            while (true) {
                printBoard(board);
                std::cout << "Enter number for cell [" << i+1 << "][" << j+1 << "]: ";
                std::cin >> num;

                if (num < 0 || num > 9) {
                    std::cout << "Սխալ թիվ, պետք է լինի 0-9: " << std::endl;
                } else if (num != 0 && !isSafe(board, i, j, num)) {
                    std::cout << "Սխալ մուտքագրում, թիվը արդեն կա տողում, սյունում կամ 3x3 բլոկում." << std::endl;
                } else {
                    board[i][j] = num;
                    break;
                }
            }
        }
    }

    std::cout << "Վերջնական մուտքագրված Sudoku:" << std::endl;
    printBoard(board);

    return 0;
}
