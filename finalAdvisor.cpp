//*****************************************************
// Authors: Matt Gratton, Matthew Knowler, Minh Phan
//
// finalAdvisor.cpp : Midterm Project, Problem #3
// Advises the user, a student, whether they need to
// take the final exam based on their midterm grade.
//
// Compiled using Visual Studio 2017
//*****************************************************

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	// declare needed variable
	char grade;

	// get user's grade, a char
	cout << "Please enter your midterm letter grade: ";
	cin >> grade;
	cout << endl;

	// let user know if they need to take
	// the final based on their letter grade
	switch (grade)
	{
	case 'A':
		cout << "Your grade is excellent! You do not "
			<< "have to take the final." << endl;
		break;
	case 'B':
		cout << "Your grade is very good. You do not "
			<< "have to take the final." << endl;
		break;
	case 'C':
		cout << "Your grade is passing. You will "
			<< "have to take the final." << endl;
		break;
	case 'D':
	case 'F':
		cout << "Your grade is not good. You will have "
			<< "to take the final. Go study." << endl;
		break;
	default:
		cout << "Invalid grade." << endl;
	}

	// wait for user to end the program
	system("pause");

    return 0;
}