#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {

	char firstName[20]{};
	char lastName[20]{};
	char fullName[50]{};
	char temp[50]{};

	//cout << firstName; //Will likely display garbage!

	//cout << "Please enter your first name: ";
	//cin >> firstName;

	//cout << "Please enter your last name: ";
	//cin >> lastName;
	//cout << "=============================" << endl;

	////strlen returns a type of size_t
	//cout << "Hello, " << firstName << " your first name has " << strlen(firstName) << " characters" << endl;
	//cout << "and your last name, " << lastName << " has " << strlen(lastName) << " characters" << endl;

	//strcpy_s(fullName, firstName); //copy firstName to fullName
	//strcat_s(fullName, " "); //concatenate fullName and a space
	//strcat_s(fullName, lastName); // concatenate lastName to fullName
	//cout << "Your full name is " << fullName << endl;

	//This code will only store up until the space because the inherent behavior of the cin operator
	//cout << "----------------------------" << endl;
	//cout << "Enter your full name: ";
	//cin >> fullName;

	//cout << "Your full name is " << fullName << endl;
	
	//using cin's getline function it gets everything on that line until the specified amount is reached (in this case 50)
	cout << "Enter your full name: ";
	cin.getline(fullName, 50);
	cout << "Your full name is " << fullName << endl;




	cout << endl;
	return 0;
}