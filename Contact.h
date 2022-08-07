#pragma once
#include<iostream>
#include<string>

#define storage_count 1000//Max storage count

//Contact Struct
struct Person
{
	std::string name;
	int sex; 
	int age;
    std:: string phone;
	std::string address;
};

//Yellow Page Struct.
struct Yellow_Page
{
	Person person_arry[storage_count];
	int person_counter;
};