#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

	string s0;
	string s1{ "Apple" };
	string s2{ "Banana" };
	string s3{ "Kiwi" };
	string s4{ "apple" };
	string s5{ s1 }; // Apple
	string s6{ s1, 0, 3 }; // App
	string s7(10, 'X'); // XXXXXXXXXX

	//cout << s0 << endl; //No garbage
	//cout << s0.length() << endl; //empty string

	//Initialization
	/*cout << "\nInitialization" << "\n---------------------------------" << endl;
	cout << "s1 is initialized to: " << s1 << endl;
	cout << "s2 is initialized to: " << s2 << endl;
	cout << "s3 is initialized to: " << s3 << endl;
	cout << "s4 is initialized to: " << s4 << endl;
	cout << "s5 is initialized to: " << s5 << endl;
	cout << "s6 is initialized to: " << s6 << endl;
	cout << "s7 is initialized to: " << s7 << endl;*/

	//Comparison
	/*cout << "\nComparison" << "\n-------------------------------------" << endl;
	cout << boolalpha;
	cout << s1 << " == " << s5 << ": " << (s1 == s5) << endl;
	cout << s1 << " == " << s2 << ": " << (s1 == s2) << endl;
	cout << s1 << " != " << s2 << ": " << (s1 != s2) << endl;
	cout << s1 << " < " << s2 << ": " << (s1 < s2) << endl;
	cout << s2 << " > " << s1 << ": " << (s2 > s1) << endl;
	cout << s4 << " < " << s5 << ": " << (s4 < s5) << endl;
	cout << s1 << " == " << "Apple" << ": " << (s1 == "Apple") << endl;*/

	//Assignment
	//cout << "\nAssignment" << "\n------------------------------------------" << endl;

	//s1 = "Watermelon";
	//cout << "s1 is now: " << s1 << endl; //Watermelon
	//s2 = s1;
	//cout << "s2 is now: " << s2 << endl; //Watermelon

	//s3 = "Frank";
	//cout << "s3 is now: " << s3 << endl; //Frank

	//s3[0] = 'C';
	//cout << "s3 change first letter to 'C':" << s3 << endl; //Crank
	//s3.at(0) = 'P';
	//cout << "s3 change first letter to 'P': " << s3 << endl; //Prank

	//Concatenation
	//cout << "\nConcatenation" << "\n---------------------------------------------" << endl;

	//s3 = "Watermelon";
	//s3 = s5 + " and " + s2 + " juice"; // Apple and Banana juice
	//cout << "s3 is now: " << s3 << endl; // Apple and Banana Juice

	// //s3 = "nice " + " cold " + s5 + "juice"; // Compiler error

	// for loop
	cout << "\nLooping" << "\n-------------------------------------------" << endl;
	s1 = "Apple";
	for (size_t i{ 0 }; i < s1.length(); i++) {
		cout << s1.at(i); //
	}
	cout << endl;

	cout << endl;
	return 0;
}