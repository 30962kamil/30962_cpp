#include <iostream> 
#include <cmath>
#include <string>
using namespace std;

void show(string names[], string surnames[], int yearsOfBrith[], int i) {
	cout << names[i] << " " << surnames[i] << " was born in year " << yearsOfBrith[i] << " and now is " << 2023 - yearsOfBrith[i] << endl;

}
void input() {
	string names[4], surnames[4], input;
	int yearsOfBrith[4];
	for (int i = 0; i <= 3; i++) {
		cout << "Give the name for a person " << i + 1 << ": ";
		getline(cin, names[i]); cout << endl;
		cout << "Give the surname for a person " << i + 1 << ": ";
		getline(cin, surnames[i]); cout << endl;
		cout << "Give the year of birth for a person " << i + 1 << ": ";
		getline(cin, input); cout << endl;
		yearsOfBrith[i] = stoi(input);
	}
	for (int i = 0; i <= 3; i++) {
		show(names, surnames, yearsOfBrith, i);
	}
}
	int main() {
		input();
		return 0;
	}
