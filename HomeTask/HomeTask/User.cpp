
#include "User.h"
#include "Machine.h"
#include "Snack.h"
#include <iostream>
#include<string>
User::User(Machine* machine, Snack* snack) {
	this->machine = machine;
	this->snack = snack;
}

void User::User_Shoice(std::string target) {
	int buff= 0;
	if (target == "Snickers") {

		buff = this->machine->Get_Cell(0, 0);
		if (buff>0)
		{
			this->machine->Give_Away(0, 0);
			std::cout << "The device gave you a Snickers" << '\n';
		}
		else std::cout << "Empty\n";

	}

	else if (target == "Bounty") {

		buff = this->machine->Get_Cell(0, 1);
		if (buff > 0)
		{
			this->machine->Give_Away(0, 1);
			std::cout << "The device gave you a Bounty" << '\n';
		}
		else std::cout << "Empty\n";
		
		
	}

	else if (target == "KitKat") {

		buff = this->machine->Get_Cell(0, 2);
		if (buff > 0)
		{
			this->machine->Give_Away(0, 2);
			std::cout << "The device gave you a KitKat" << '\n';
		}
		else std::cout << "Empty\n";
		
		
		
	}
	else if (target == "Mars") {

		buff = this->machine->Get_Cell(0, 2);
		if (buff > 0)
		{
			this->machine->Give_Away(0, 3);
			std::cout << "The device gave you a Mars" << '\n';
		}
		else std::cout << "Empty\n";

	}

	else if (target == "Coca-Cola") {
		buff = this->machine->Get_Cell(1, 0);
		if (buff > 0)
		{
			this->machine->Give_Away(1, 0);
			std::cout << "The device gave you a Coca-Cola" << '\n';
		}
		else std::cout << "Empty\n";
	}

	else if (target == "Pepsi") {


		this->machine->Give_Away(1, 1);
		std::cout << "The device gave you a Pepsi" << '\n';
	}
	else if (target == "Fanta") {
		buff = this->machine->Get_Cell(1, 2);
		if (buff > 0)
		{
			this->machine->Give_Away(1, 2);
			std::cout << "The device gave you a Fanta" << '\n';
		}
		else std::cout << "Empty\n";
		
	}

	else if (target == "Sprite") {
		buff = this->machine->Get_Cell(1, 3);
		if (buff > 0)
		{
			this->machine->Give_Away(1, 3);
			std::cout << "The device gave you a Sprite" << '\n';
		}
		else std::cout << "Empty\n";

		
	}

	else if (target == "Croissant") {

		buff = this->machine->Get_Cell(2, 0);
		if (buff > 0)
		{
			this->machine->Give_Away(2, 0);
			std::cout << "The device gave you a Croissant" << '\n';
		}
		else std::cout << "Empty\n";

		
	}
	else if (target == "Donut") {
		buff = this->machine->Get_Cell(2, 1);
		if (buff > 0)
		{
			this->machine->Give_Away(2, 1);
			std::cout << "The device gave you a Donut" << '\n';
		}
		else std::cout << "Empty\n";

		
	}
	else if (target == "Muffin") {
		buff = this->machine->Get_Cell(2, 2);
		if (buff > 0)
		{
			this->machine->Give_Away(2, 2);
			std::cout << "The device gave you a Muffin" << '\n';
		}
		else std::cout << "Empty\n";

		
	}

	else if (target == "Bagel") {
		buff = this->machine->Get_Cell(2, 3);
		if (buff > 0)
		{
			this->machine->Give_Away(2, 3);
			std::cout << "The device gave you a Bagel" << '\n';
		}
		else std::cout << "Empty\n";
		
	}
	else if (target == "Lays") {
		buff = this->machine->Get_Cell(3, 0);
		if (buff > 0)
		{
			this->machine->Give_Away(3, 0);
			std::cout << "The device gave you a bag of Lays chips" << '\n';
		}
		else std::cout << "Empty\n";

		
	}
	else if (target == "Pringles") {
		buff = this->machine->Get_Cell(3, 1);
		if (buff > 0)
		{
			this->machine->Give_Away(3, 1);
			std::cout << "The device gave you a can of Pringles" << '\n';
		}
		else std::cout << "Empty\n";
	
	}
	else if (target == "Cheetos") {
		buff = this->machine->Get_Cell(3, 2);
		if (buff > 0)
		{
			this->machine->Give_Away(3, 2);
			std::cout << "The device gave you a bag of Cheetos" << '\n';
		}
		else std::cout << "Empty\n";

		
	}
	else if (target == "Ruffles") {
		buff = this->machine->Get_Cell(3, 3);
		if (buff > 0)
		{
			this->machine->Give_Away(3, 3);
			std::cout << "The device gave you a bag of Ruffles chips" << '\n';
		}
		else std::cout << "Empty\n";

		
	}
	else {
		std::cout << "Invalid selection. Please try again." << std::endl;
		return;
	}
}