//Samantha Solomon--C8306615
//CSCI 2170-004 Dr. Xin Yang)
//OLA6
//Program Description: Inputting the users first and last name to generate an email address and password
//Due: Nov 13th, 2020)

#ifndef EMAIL_H
#define EMAIL_H

#include<string>
using namespace std;

//declare your class Email here
class Email
{
	private:
		string firstName;
		string lastName;
		string password;
		string department;
		int mailBoxCapacity = 500;
		int passwordLength = 10;
		string domain1 = ".mtsu.edu";
		string domain2 = "mtsu.edu";

		//get department code from user
		string setDepartment();
		//generate randompassword
		string randomPassword(int length);

	public:
		//default constructor
		Email();
		//constructor with two parameters
		Email(string, string);
		//info to displayinfo
		void displayInfo();
		void passwordChange();
};

#endif
