#include <iostream>

int main() {
    int size;
    std::cout << "Enter the size of the square matrix: ";
    std::cin >> size;

    // Dynamically allocate memory for the matrix
    int** matrix = new int*[size];
    for (int i = 0; i < size; ++i) {
        matrix[i] = new int[size];
    }

    // Input elements for the matrix
    std::cout << "Enter " << size * size << " integers for the square matrix:" << std::endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    // Output the matrix
    std::cout << "The square matrix you entered is:" << std::endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }


    return 0;
}

