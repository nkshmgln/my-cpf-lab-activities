#include <iostream>
using namespace std;

int main () {
	int rnge = 0;
	int count = 0;
	int numA[50];
	int index;
	string oddEven[50];
	
	cout << "Enter range of numbers: ";
	cin >> rnge;
	
	cout << "Enter " << rnge <<" consecutive numbers: ";
	
	while(count < rnge) {		
		cin >> numA[index];
		if (numA[index] % 2 == 0)
			oddEven[index] = "Even";
		else
			oddEven[index] = "Odd";
		index++;
		count++;
	}
	
	while(count < rnge) {
		cout << numA[index] << " - " << oddEven[index] << " number" << endl;
		index++;
		count++;
	}
}