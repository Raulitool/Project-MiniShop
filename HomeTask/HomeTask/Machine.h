#pragma once


class Machine {
public:
    Machine(int rows, int cols);
    ~Machine();
    void Show_Machine() ;
    void Fill();
    int Get_Cell(int rows, int cols);
    int Give_Away(int rows, int cols);
private:
    int** matrix;
    int rows;
    int cols;
 
};

