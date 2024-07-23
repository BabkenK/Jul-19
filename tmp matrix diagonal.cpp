#include <iostream>

void swapDiag(int **matrix, int size);
void printMatrix(int** matrix, int size);

void swapDiag(int **matrix, int size) {
    for(int i = 0; i < size; ++i) {
        int tmp = matrix[i][i];
        matrix[i][i] = matrix[i][size - 1 - i];
        matrix[i][size - 1 - i] = tmp;
    }
}

void printMatrix(int** matrix, int size) {
    for(int i = 0; i < size; ++i) {
        for(int j = 0; j < size; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int size = 0;
    
    std::cout << "Please enter the size of rows and columns: ";
    std::cin >> size;
    
    int **matrix = new int*[size];
    for(int i = 0; i < size; ++i) {
        matrix[i] = new int[size];
    }
        
    std::cout << "Enter elements of matrix:" << std::endl;
    for(int i = 0; i < size; ++i) {
        for(int j = 0; j < size; ++j) {
            std::cin >> matrix[i][j];
        }
    }
    
    std::cout << "\nOriginal Matrix:" << std::endl;
    printMatrix(matrix, size);
    
    swapDiag(matrix, size);
    
    std::cout << "\nMatrix after swapping diagonals:" << std::endl;
    printMatrix(matrix, size);
    
    for(int i = 0; i < size; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}