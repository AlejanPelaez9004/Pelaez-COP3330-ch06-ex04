/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Alejandro Pelaez
 */
//Define a class Name_value that holds a stringand a
//value.Rework exercise 19 in Chapter 4 to use a
//vector<Name_value> instead of two vectors.
#include <iostream>
#include <vector>

using namespace std;

class Name_value
{
public: 
	string name;
	double value;
};

int main()
{
	vector<Name_value> nameValues;

	while (true)
	{
		cout << "Enter a name followed by a number: ";
		Name_value nameValueObject;
		cin >> nameValueObject.name >> nameValueObject.value;

		for (Name_value nvPair : nameValues)
		{
			if (nvPair.name == nameValueObject.name)
			{
				cout << "Error: this name was already entered.";
				return -1;
			}
		}

		nameValues.push_back(nameValueObject);
		for (Name_value nvPair : nameValues)
		{
			cout << nvPair.name << " " << nvPair.value << "\n";
			if (nvPair.name == "NoName" && nvPair.value == 0)
				return 0;
		}
	}
}