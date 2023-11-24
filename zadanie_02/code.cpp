#include <iostream>
using namespace std;
int time_now, x, y, c, v;

int main()
{
	// part 1
	cout << "What's the time now?: ";
	cin >> time_now;

	if (time_now >= 17)
	{
		cout << "Man, it's time to go home!" << endl;
	}
	else
	{
		cout << "You still have some work ahead of you! \n\n\n\n\n";
	}

	// part 2

	cout << "Give two numbers to divide (x y): ";
	cin >> x >> y;
	if (y == 0) {
		cout << "You can't divide by 0" << endl;
	}
	else {

		cout << x / y << endl;
	}

	// part 3
	cout << "Type two numbers (x y): ";
	cin >> c >> v;
	if (c > v) {
		cout << "Number is higer than the other " << endl;
	}
	else {
		cout << "The First number is not higer than the other " << endl;
	}if (c < v) {
		cout << "The First number is lower than the other " << endl;
	}
	else {
		cout << "The First number is not lower than the other " << endl;
	}
	if (c >= v) {
		cout << "The First number is higer or equal than the other " << endl;
	}
	else {
		cout << "The First number is not higer or equal than the other " << endl;
	}
	if (c <= v) {
		cout << "The First number is lower or equal than the other " << endl;
	}
	else {
		cout << "The First number is not lower or equal than the other " << endl;
	}
	if (c == v) {
		cout << "The First number is equal to the other " << endl;
	}
	else {
		cout << "The First number is not equal to the other " << endl;
	}
	if (c != v) {
		cout << "The First number is different from the other " << endl;
	}
	else {
		cout << "The First number is not different from the other " << endl;
	}


	return 0;
}
