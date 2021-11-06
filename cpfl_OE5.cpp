//Name: Nikosh O. Maglinao
//Date: November 6, 2021
//Description: The string and an unsigned integer the user will input a string or
//             words and a group of unsigned integer in base 10.

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void reverseString(string word) {
	string reverse;
	int j = word.length() - 1;
	for (int i = 0; i < word.length(); i++) {		
		reverse[i] = word[j];	
		cout << reverse[i];
		j--;
	}
	cout << endl << endl;
}

void reverseUnsignedInt(unsigned n) {
	stringstream ss;
	string reverse;
	string word_num;
	ss << n;
	ss >> word_num;
	
	int j = word_num.length() - 1;
	for (int i = 0; i < word_num.length(); i++) {		
		reverse[i] = word_num[j];	
		cout << reverse[i];
		j--;
	}
	cout << endl << endl;
}

int main() {
	string word;
	unsigned n;
	int answer = 0;
	
	while(answer != 3) {
		answer = 0;
		system("cls");
		cout << endl;
		cout << "[1] Reverse a String" << endl;
		cout << "[2] Reverse Unsigned Integer" << endl;
		cout << "[3] Exit" << endl;
		cout << "Select Function: ";
		cin >> answer;
		
		switch(answer) {
			case 1: {
				cin.ignore();
				cout << "\n<< Reverse a String >>" << endl;
				cout << "Enter a word: ";
				getline(cin, word);
				reverseString(word);
				system("pause");
				break;
			}
			case 2: {
				cout << "\n<< Reverse an unsigned integer >>" << endl;
				cout << "Enter a number [0-9]: ";
				cin >> n;
				reverseUnsignedInt(n);
				system("pause");
				break;
			}
			case 3: {
				cout << "\nExit" << endl;
				system("pause");	
				break;
			}		
			default: {
				cout << "Invalid Input!";
				system("pause");
				break;
			}
			
		} 
	} 
}
