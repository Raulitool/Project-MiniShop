#pragma once
#include<string>
class Machine;
class Snack;

class User {
public:
	void User_Shoice(std::string );
	User(Machine* machine, Snack* snack);

private:
	Machine* machine;
	Snack* snack;
	
};


