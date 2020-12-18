//Samantha Solomon--C8306615
//CSCI 2170-004 Dr. Xin Yang)
//OLA6
//Program Description: Inputting the users first and last name to generate an email address and password
//Due: Nov 13th, 2020)
#include"Email.h"
#include<string>
#include<ctime>
#include<iomanip>
#include<iostream>
using namespace std;

//default constructor definition
Email::Email()
{

}
//constructor with two parameters definition
Email::Email(string firstName, string lastName)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->department = setDepartment();
	this->password = randomPassword(passwordLength);
}

//setDepartment definition, gives user the menu options
string Email::setDepartment()
{
    int choice;
	cout << "Please enter your department code: " << endl;
	cout << "==================================" << endl;
	cout << "0: None" << endl;
	cout << "1: Computer Science" << endl;
	cout << "2: Accounting" << endl;
	cout << "3: Electrical Engineering" << endl;
	cin >> choice;
	cout << "Your email account has been created successfully!" << endl;
	cout << "=================================================" << endl << endl << endl;

	//the switch statement to to break up each item thats chosen
	switch(choice)
	{
		case 0: 
			department= " ";
			break;
		case 1:
			department= "cs";
			break;
		case 2:
			department= "act";
			break;
		case 3:
			department= "ee";
			break;
	}
	return department;
}
//passwordChange definition, gives the user the option to change their password
void Email::passwordChange()
{
	cout << "Please enter your new password:" << endl;
	cin >> password;
	cout << "Your password is updated!" << endl;
	cout << "-------------------------------------------------" << endl;
}
//displayInfo definition, this will display the email account information
void Email::displayInfo()
{
	string emailAddress;
	if(department!= " ")
		{
			emailAddress = firstName +"."+lastName+"@"+department+domain1;
		}
	else
		{
			emailAddress = firstName+"."+lastName+"@"+domain2;
		}
	cout << "Your Email Account Information: " << endl;
	cout << "=================================================" << endl;
	cout << "   Email address: " << emailAddress << endl;
	cout << "        Password: " << password << endl;
	cout << "Mailbox Capacity: " << mailBoxCapacity << "MB" << endl;
	cout << "=================================================" << endl;
}

/*************************************
*Name: randomPassword
*Input: int length
*Output: string
*This method generates a random password given the length
*/
string Email::randomPassword(int length)
{
	srand(time(NULL));
	string passStr = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$";
	string pass = "";
	
	int index;

	for(int i = 0; i < length; i++)
	{
		index = rand()%length;
		pass = pass + passStr[index];
	}

	return pass;
}
