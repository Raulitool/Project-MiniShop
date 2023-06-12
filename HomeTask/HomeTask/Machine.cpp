#include "Machine.h"
#include<iostream>

Machine::Machine(int rows, int cols) {
    this->rows = rows;
    this->cols = cols;
    matrix = new int* [rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
    }
}
int Machine::Give_Away(int rows, int cols) {
    
        matrix[rows][cols] -= 1;
    
    
    return matrix[rows][cols];
}

int Machine::Get_Cell(int rows, int cols) {
    return matrix[rows][cols];
}

void Machine::Fill() {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = 10;
        }
    }
}
void Machine::Show_Machine() {
  
    for (int i = 0; i < rows; i++) {
     
        for (int j = 0; j < cols; j++) {
            
            std::cout << matrix[i][j] << '\t';
        }
        std::cout << "\n";
    }
}
Machine::~Machine() {
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
}