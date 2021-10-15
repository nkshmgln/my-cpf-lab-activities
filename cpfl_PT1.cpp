#include <iostream>
using namespace std;

int main () {
	int Rng = 0;
	int count = 0;
	int NumA[50];
	int index;
	string oddEven[50];
	
	cout << "Enter range of numbers: ";
	cin >> Rng;
	
	cout << "Enter " << Rng <<" consecutive numbers: ";
	index=0;
	while(count < Rng) {		
		cin >> NumA[index];
		if (NumA[index] % 2 == 0)
			oddEven[index] = "Even";
		else
			oddEven[index] = "Odd";
		index++;
		count++;
	}
	count=0;
    index=0;
	while(count < Rng) {
		cout << NumA[index] << " - " << oddEven[index] << " number" << endl;
		index++;
		count++;
	}
}