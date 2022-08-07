#include <iostream>
#include "Function.h"
#include"Contact.h"

using namespace std;



int main()
{
	//Main Varibles
	int selection ;
	int running_flag ;
	Yellow_Page page;

	//Initial Yellow Page
	page.person_counter = 0;


	do {
		//Initial Page
		Menu();

		//Function
		cin >> selection;
		switch (selection)
		{
			//Add People
		case 1:
			add_people(&page);
			running_flag = 1;

			//Show People
		case 2:
			running_flag = 1;
			break;

			//Delete People
		case 3:
			running_flag = 1;
			break;

			//Search People
		case 4:
			running_flag = 1;
			break;

			//Edit People
		case 5:
			running_flag = 1;
			break;

			//Clear People
		case 6:
			running_flag = 1;
			break;

			//Exit
		case 0:
			running_flag = 0;
			system("pause");
			return 0;
			break;

			//Error and back to intial page
		default:
			cout << "Wrong selection" << endl;
			running_flag = 1;
		}
	} while (running_flag == 1);
}