#include<iostream>
#include"Snack.h"
#include"Machine.h"
#include"User.h"
#include<string>

int main() {
	setlocale(0, "");
	char exit = 's';
	std::string element;
	Machine* machine = new Machine(4, 4);
	Snack* slots = new Snack(4, 4, machine);
	User* user= new User(machine, slots);
	(*machine).Fill();
	slots->Fill_Snacks();
	slots->Show_Snacks();

	while (exit!='q')
	{

		std::cout << "�������� ��� ������  - ";
		std::cin >> element;
		user->User_Shoice(element);
		
		slots->Show_Snacks();

		std::cout << "���� ������ ���������� �� ��� ������ ����� q � f " << '\n';
		std::cout << "���� ������ ����� ������� q "<<'\n';
		std::cout << "���� ������ ����� ������� ��������� ����� �� �������� f\n";
		if (exit=='f')
		{
			(*machine).Fill();
		}
		std::cin >> exit;
	}
	




	delete machine,slots,user;
	
}