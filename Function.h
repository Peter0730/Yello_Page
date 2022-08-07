#pragma once
#include<iostream>
#include<string>
#include"Contact.h"

// Menu Page
void Menu()
{
	std::cout << "**********************************" << std::endl;
	std::cout << "| 1. Add People                  |" << std::endl;
	std::cout << "| 2. Show People                 |" << std::endl;
	std::cout << "| 3. Delete People               |" << std::endl;
	std::cout << "| 4. Search People               |" << std::endl;
	std::cout << "| 5. Edit People                 |" << std::endl;
	std::cout << "| 6. Clear People                |" << std::endl;
	std::cout << "| 0. Exit                        |" << std::endl;
	std::cout << "**********************************" << std::endl;
}

//Add People Function
void add_people(Yellow_Page *page)
{
	if (page->person_counter == storage_count)
	{
		std::cout << "The Yellow Page's Storage is FULL" << std::endl;
		return;
	}
	else
	{
		// Input Name
		std::string name;
		std::cout << "Input the name" << std::endl;
		std::cin >> name;
		page->person_arry[page->person_counter].name = name;

		//Input Sex
		int sex_flag;
		int sex = 0;
		do
		{
			std::cout << "Input the sex" << std::endl;
			std::cout << "Male ----- 1" << std::endl;
			std::cout << "Female ----- 2" << std::endl;
			std::cin >> sex;
			if (sex == 1 || sex == 2)
			{
				page->person_arry[page->person_counter].sex = sex;
				sex_flag = 0;
			}
			else
			{
				std::cout << "Invalid Input" << endl;
				sex_flag = 1;
			}
		} while (sex_flag == 1);

		//Input Age
		int age = 0;
		std::cout << "Input the age" << std::endl;
		std::cin >> age;
		page->person_arry[page->person_counter].age = age;

		//Input Phone
		std::string phone;
		std::cout << "Input the Phone Number" << std::endl;
		std::cin >> phone;
		page->person_arry[page->person_counter].phone = phone;

		//Input Address
		std::string address;
		std::cout << "Input the Address" << std::endl;
		std::cin >> address;
		page->person_arry[page->person_counter].address = address;

		//Update the person_counter
		page->person_counter++;
	}
}

