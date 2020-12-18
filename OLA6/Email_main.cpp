//Samantha Solomon--C8306615
//CSCI 2170-004 Dr. Xin Yang)
//OLA6
//Program Description: Inputting the users first and last name to generate an email address and password
//Due: Nov 13th, 2020)

#include"Email.h"
#include<iostream>
using namespace std;

int main()
{	
	//Email email;
	string firstName, lastName;

	cout << "Please enter your first Name: " << endl;
	cin >> firstName;
	cout << "Please enter your last Name: " << endl;
	cin >> lastName;
	
	Email email(firstName,lastName);

	email.displayInfo();

	char reset;
	cout << endl; 
	cout << "Do you want to reset your password? Y/N" << endl;
	cin >> reset;

	if(reset == 'Y' || reset == 'y')
	{	
		email.passwordChange();
		email.displayInfo();
	}
	
	cout << "Thank you!" << endl;
	return 0;
}
