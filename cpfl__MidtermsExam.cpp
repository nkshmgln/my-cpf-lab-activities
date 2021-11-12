//Name: Nikosh O. Maglinao
//Activity: Midterms Examination
//Date: November 12, 2021
//Description: Create A conversion console app

#include <iostream>
using namespace std;

double meterToKilometer(double num) {
	double result = 0;
	result = num / 1000;
	return result;
}

double kilometerToMeter(double num) {
	double result = 0;
	result = num * 1000;
	return result;
}

double centimeterToMillimeter(double num) {
	double result = 0;
	result = num * 10;
	return result;
}

double milesToYards(double num) {
	double result = 0;
	result = num * 1760;
	return result;
}

int main() {
	int choice = -1;
	float num = 0;
	
	while (choice != 0) {		
		system("cls");
		choice = -1;
		cout << "Lenght Conversion App" << endl << endl;
		
		cout << "[1] - Meter to Kilometer\n[2] - Kilometer to Meter\n[3] - Centimeter to Millimeter\n[4] - Miles to Yard\n[0] - Exit\n\nSelect Conversion: ";
		cin >> choice;
		
		switch (choice) {
			case 1: {
				cout << "Meter to Kilometer" << endl << endl;
				cout << "Enter number: ";
				cin >> num;
				
				cout << "Result: " << meterToKilometer(num) << endl;
				
				num = 0;
				system ("pause");
				break;
			}
			case 2: {
				cout << "Kilometer to Meter" << endl << endl;
				cout << "Enter number: ";
				cin >> num;
				cout << "Result: " << kilometerToMeter(num) << endl;
				num = 0;
				system ("pause");
				break;
			}
			case 3: {
				cout << "Centimeter to Millimeter" << endl << endl;
				cout << "Enter number: ";
				cin >> num;
				cout << "Result: " << centimeterToMillimeter(num) << endl;
				num = 0;
				system ("pause");
				break;
			}
			case 4: {
				cout << "Miles to Yard" << endl << endl;
				cout << "Enter number: ";
				cin >> num;
				cout << "Result: " << milesToYards(num) << endl;
				num = 0;
				system ("pause");
				break;
			}			
			case 0: {
				cout << "EXIT" <<endl;
				system ("pause");
				break;
			}
			default: {
				cout << "Invalid Input! Enter again!" << endl;
				system ("pause");
				break;
			}
		}				
	}
}
