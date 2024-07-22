#include <iostream>

 int sumOfMainD (int** matrix, int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += matrix[i][i];  
    }
    return sum;
}

int main() {
    int size;
    std::cout << "Enter the size of the square matrix: ";
    std::cin >> size;

     int** matrix = new int*[size];
    for (int i = 0; i < size; ++i) {
        matrix[i] = new int[size];
    }

     std::cout << "Enter " << size * size << " integers for the square matrix:" << std::endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cin >> matrix[i][j];
        }
    }

     int sumdiagonal = sumOfMainD (matrix, size);

     std::cout << "The square matrix you entered is:" << std::endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << matrix[i][j] << " ";
        }
     }

     std::cout << "Sum of the main diagonal elements: " << sumdiagonal << std::endl;

    return 0;
}