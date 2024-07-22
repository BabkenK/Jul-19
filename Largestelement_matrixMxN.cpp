#include <iostream>

const int maxRows = 100;
const int maxCols = 100;

int findLelement(int matrix[maxRows][maxCols], int rows, int cols);

int findLelement(int matrix[maxRows][maxCols], int rows, int cols){
    int maxElement = matrix[0][0];
    
    for(int i=0; i <rows; ++i){
        for(int j=0; j < cols; ++j){
            if(matrix[i][j] > maxElement){
                maxElement = matrix[i][j];
            }
        }
    }
    return maxElement;
}


int main(){
    
    int matrix[maxRows][maxCols];
    int rows;
    int cols;
    
    std::cout << "Enter number of rows up to " << maxRows << " ";
    std::cin >> rows;
    
    std::cout << "Enter number of cols up to " <<maxCols << std::endl;
    std::cin >> cols;
    
    std::cout << "enter the elements of matrix: ";
    for(int i=0; i <rows; ++i){
        for(int j=0; j < cols; ++j){
            std::cout << "Enter the elements of our positions: " << i << " " << j << std::endl;
            std::cin>>matrix[i][j];
        }
    }
    
    int largetelement = findLelement(matrix, rows, cols);
    
    std::cout << "The largest element in the matrix is: " << largetelement << std::endl;
    
    return 0;
}