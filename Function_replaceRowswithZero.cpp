#include <iostream>

const int maxSize = 100;

void repRowtoZero(int matrix[maxSize][maxSize], int size) {
    for (int i = 0; i < size; ++i) {
        if (i % 2 == 0) {
            for (int j = 0; j < size; ++j) {
                matrix[i][j] = 0;
            }
        }
    }
}

void printMat(int matrix[maxSize][maxSize], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int size;
    int matrix[maxSize][maxSize];

    std::cout << "Enter size of the square matrix up to " << maxSize << std::endl;
    std::cin >> size;

    std::cout << "Enter elements of the matrix:" << std::endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << "Enter element at position " << i << " " << j << std::endl;
            std::cin >> matrix[i][j];
        }
    }

    repRowtoZero(matrix, size);

    std::cout << "\nModified Matrix:\n";
    printMat(matrix, size);

    return 0;
}
