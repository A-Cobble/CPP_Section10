#include <iostream>
#include <string>

using namespace std;

int main() {

	string input{};
	cout << "Enter a string that you want to be made into a letter pyramid: ";
	getline(cin, input);

	for (size_t i{ 0 }; i < input.size(); i++) {
		cout << input[i] << endl;
		for (size_t j{ i }; j < input.size() - 1; j++) {
			cout << input[j];
		}
	}

	cout << endl;
	return 0;
}