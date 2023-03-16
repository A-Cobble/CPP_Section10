#include <iostream>
#include <string>

using namespace std;

int main() {

	string input{};
	cout << "Enter a string that you want to be made into a letter pyramid: ";
	getline(cin, input);

	for (size_t i{ 0 }; i < input.size(); i++) {
		//cout << input[i] << endl;
		for (size_t j{ 0 }; j < input.size() - i; j++) {
			cout << " ";
		}

		for (size_t x{0}; x < (input.size() + 1) - (input.size() - i); x++) {
			cout << input[x];
		}

		for (size_t y{ 0 }; y < input.size() - (input.size() - i); y++) {
			cout << input[y];
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}