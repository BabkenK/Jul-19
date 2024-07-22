#include <iostream>

const int maxSize = 100;

 int sumAuxDiagonal(int matrix[maxSize][maxSize], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += matrix[i][size - 1 - i];
    }
    return sum;
}

int main() {
    int size;
    int matrix[maxSize][maxSize];

    std::cout << "Enter size of the square matrix up to " << maxSize << std::endl;
    std::cin >> size;

    std::cout << "Enter elements of the matrix:" << std::endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << "Enter element at position (" << i << "  " << j << std::endl;
            std::cin >> matrix[i][j];
        }
    }

    int sum = sumAuxDiagonal(matrix, size);

    std::cout << "Sum of elements on the auxiliary diagonal: " << sum << std::endl;

    return 0;
}

