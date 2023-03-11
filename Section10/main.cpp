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
	
	//using cin's getline function it gets everything on that line until the specified amount is reached (in this case 50) or enter is pushed 
	cout << "Enter your full name: ";
	cin.getline(fullName, 50);
	cout << "Your full name is " << fullName << endl;

	cout << "---------------------------" << endl;
	
	//copies fullName TO temp
	strcpy_s(temp, fullName);

	//strcmp compairs fullName and temp if both are the same it will output 0
	if (strcmp(temp, fullName) == 0) {
		cout << temp << " and " << fullName << " are the same" << endl;
	}
	else {
		cout << temp << " and " << fullName << " are different" << endl;
	}
	cout << "---------------------------" << endl;


	for (size_t i{ 0 }; i < strlen(fullName); i++) {
		//isalpha checks to see if it is a letter
		if (isalpha(fullName[i])) {
			fullName[i] = toupper(fullName[i]);
		}
	}
	cout << "Your full name is " << fullName << endl;


	cout << endl;
	return 0;
}