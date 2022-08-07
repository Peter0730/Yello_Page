#include <iostream>
#include "Function.h"

using namespace std;



int main()
{
	//Main Varibles
	int selection ;
	int menu_flag ;

	do {
		//Initial Page
		Menu();

		//Function
		cin >> selection;
		switch (selection)
		{
			//Add People
		case 1:
			menu_flag = 1;
			break;

			//Show People
		case 2:
			menu_flag = 1;
			break;

			//Delete People
		case 3:
			menu_flag = 1;
			break;

			//Search People
		case 4:
			menu_flag = 1;
			break;

			//Edit People
		case 5:
			menu_flag = 1;
			break;

			//Clear People
		case 6:
			menu_flag = 1;
			break;

			//Exit
		case 0:
			menu_flag = 0;
			system("pause");
			return 0;
			break;

			//Error and back to intial page
		default:
			cout << "Wrong selection" << endl;
			menu_flag = 1;
		}
	} while (menu_flag == 1);
}