#include <iostream>
#include <string>

using namespace std;

/*
	A simple and very old method of sending secret messages is the substitution cipher.
	Each letter of the alphabet gets replaced by another letter of the alphabet.
	For example, every 'a' gets replaced with an 'X', and every 'b' gets replaced with a 'Z' etc.

	Write a program that asks a user to enter a secret message.

	Encrypt this message using the substitution cipher and display the encrypted message. 
	Then decrypt the encrypted message back to the original message.

	You may use the 2 strings below for your subsitution.
	For example, to encrypt you can replace the character at position n in the alphabet
	with the character at position n in the key

	To decrypt you can replace the character at position n in the key
	with the charcter at position n in the alphabet.

	Have fun! And make the cipher stronger if you wish!
	Currently the cipher only substitutes letters - you could easily add digits, puncuation, whitespace and so
	forth. Also, currently the cipher always substitues a lowercase letter with an uppercase letter and vice-versa.
	This could also be improved.

	Remember, the less code you write the less code you have to test!
	Reuse existing functionality in libraries and in the std::string class!
*/

int main() {

	//string alphabet{ "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
	//string key{ "XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr" };
	//string message{};
	//string codedMessage{};
	//

	//cout << "Enter your secret message: ";
	//getline(cin, message);

	//cout << "\nEncrypting message..." << endl;

	//for (size_t i{ 0 }; i < message.length(); i++) {
	//		size_t position = alphabet.find(message.at(i));
	//	if (position != string::npos) {
	//		codedMessage.push_back(key.at(position));
	//	}
	//	else {
	//		codedMessage.push_back(message.at(i));
	//	}
	//}
	//message.swap(codedMessage);
	//cout << message << endl;

	//cout << "\nDecrypting message ..." << endl;
	//message.swap(codedMessage);
	//cout << message << endl;

	
	string alphabet{ "{ abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
	string key{ " {XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr" };
	string message{};
	string codedmessage{};


	cout << "enter your secret message: ";
	getline(cin, message);

	cout << "\nencrypting message..." << endl;

	for (auto c: message) {
		size_t position = alphabet.find(c);
		if (position != string::npos) {
			char new_char { key.at(position) };
			codedmessage += new_char;
		}
		else {
			codedmessage += c;
		}
	}
	
	cout << codedmessage << endl;

	string decrypted_message{};
	cout << "\ndecrypting message ..." << endl;
	
	for (char c : codedmessage) {
		size_t position = key.find(c);
		if (position != string::npos) {
			char new_char{ alphabet.at(position) };
			decrypted_message += new_char;
		}
		else {
			decrypted_message += c;
		}
	}
	cout << decrypted_message << endl;
	
	cout << endl;
	return 0;
}