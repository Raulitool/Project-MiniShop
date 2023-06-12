#pragma once

#include<string>
#include"Machine.h"

class Snack  {
	
	public:
		Snack(int Rows, int Cols, Machine* machine);
		~Snack();
		void Show_Snacks();
		void Fill_Snacks();
	
	private:
		std::string** Matrix;
		int Rows;
		int Cols;
		Machine* machine;

};

