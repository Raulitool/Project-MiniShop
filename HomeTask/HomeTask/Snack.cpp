#include "Snack.h"
#include<iostream>
#include<string>

Snack::Snack(int Rows, int Cols, Machine* machine) {
    this->Rows = Rows;
    this->Cols = Cols;
    Matrix = new std::string * [Rows];
    for (int i = 0; i < Rows; ++i) {
        Matrix[i] = new std::string[Cols];
    }
    this->machine = machine;
}


void Snack::Fill_Snacks() {

    Matrix[0][0] = "Snickers";
    Matrix[0][1] = "Bounty";
    Matrix[0][2] = "KitKat";
    Matrix[0][3] = "Mars";

    Matrix[1][0] = "Coca-Cola";
    Matrix[1][1] = "Pepsi";
    Matrix[1][2] = "Fanta";
    Matrix[1][3] = "Sprite";

    Matrix[2][0] = "Croissant";
    Matrix[2][1] = "Donut";
    Matrix[2][2] = "Muffin";
    Matrix[2][3] = "Bagel";

    Matrix[3][0] = "Lays";
    Matrix[3][1] = "Pringles";
    Matrix[3][2] = "Cheetos";
    Matrix[3][3] = "Ruffles";


}

void Snack::Show_Snacks() {
  
    
        for (int i = 0; i < Rows; i++) {
            for (int j = 0; j < Cols; j++) {
                std::cout << Matrix[i][j] << " ";
                if (j==3)
                {
                    std::cout << "\n\n";
                    for (int j = 0; j < Cols; j++)
                    {
                        std::cout << machine->Get_Cell(i, j) << "      ";
                    }
                    std::cout << "\n";
                }
               
            }
            std::cout << "\n";
        }

    
    
}
Snack::~Snack() {
    for (int i = 0; i < Rows; ++i) {
        delete[] Matrix[i];
    }
    delete[] Matrix;
}





