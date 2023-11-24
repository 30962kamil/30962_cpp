#include <iostream>
using namespace std;

int main() {
	// example
	/*
	for (int i = 0; i <= 3; i++) {
		cout << "Hello! \n";
	}*/

	// part 1
	/*
	for (int i = 0; i <= 13; i++) {
		cout << i << endl;
	}*/

	// part 2
	/*
	int k;
	cout << "How many to count?: "; cin >> k;
	for (int i = 1; i <= k; i++) {
		cout << i << endl;
	}*/

	// part 3
	/*
	int k2, p2;
	cout << "What number start counting from?: "; cin >> p2; cout << endl;
	cout << "How many to count?: "; cin >> k2;
	for (int i = p; i <= k; i++) {
		cout << i << endl;
	}*/

	// part 4
	/*
	int k3, p3, c3, eq, cd;
	cout << "What number start counting from?: "; cin >> p3; cout << endl;
	cout << "How many to count?: "; cin >> k3;
	eq = k3 - p3;
	for (int i = p3; i <= k3; i++) {
		cout << "Printing number: " << i << ". Remaining: " << eq << endl;
		eq-- ;
	}*/

	// part 5
	/*
	for (int i = 3; i >= 0; i--) {
		cout << i << " ";
	}*/

	// part 6
	int x1, y1;
	cout << endl << "  ( Numbers must go downward ) " << endl;
	cout << "     Write value for x: "; cin >> x1;
	cout << "     Write value for y: "; cin >> y1;
	for (x1; x1 >= y1 ; x1--) {
		cout << x1;
		if (x1 > y1) {
			cout << ", ";
		}
		else if (x1=y1) {
			cout << "!";
		}
	} 
	return 0;
}
