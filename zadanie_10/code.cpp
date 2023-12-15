#include <iostream>
#include <random>
using namespace std;
const int c = 3, cc = 200, r = 5, rr = 10;
int rl(int a, int b)
{
	random_device dev;
	mt19937 rng(dev());
	uniform_int_distribution<mt19937::result_type> dist6(a, b); // distribution in range [a, b]
	return dist6(rng);
}
int main()
{
	int d2_array[r][c], d2_array_2[rr][cc];
	int row, column;

	//  changer
	for (row = 0; row < r; row++)
	{
		for (column = 0; column < c; column++)
		{
			cout << "Insert data to array(" << row << ", " << column << ")";
			cin >> d2_array[row][column];

		}
		cout << endl;
	}
	// row plus column display
	cout << "		Visual representation of Array: \n";
	for (row = 0; row < r; row++)
	{
		for (column = 0; column < c; column++)
		{
			cout << d2_array[row][column] << " ";
		}
		cout << endl;
	}
	cout << "		List: " << endl;
	// checker
	for (row = 0; row < r; row++)
	{
		for (column = 0; column < c; column++)
		{
			cout << "Array[" << row << "]" << "[" << column << "] = ";
			cout << d2_array[row][column] << " \n";
		}

	}
	cout << endl << "		Max value list from -100 to 100: \n";

	// RANDOM NR GENERATOR (-100, 100)
	for (row = 0; row < rr; row++)
	{
		for (column = 0; column < cc; column++)
		{
			d2_array_2[row][column] = rl(0, 200) - 100;
		}
	}
	// MAX VALUE
	for (row = 0; row < rr; row++)
	{
		int highNum = -100;
		for (column = 0; column < cc; column++)
		{
			if (d2_array_2[row][column] > highNum)
				highNum = d2_array_2[row][column];
		}
		cout << "Max value for row " << row << " is: " << highNum;
		if (highNum < 80) { cout << " !*!*!*!*!*!*!*!*!*!*!*!"; }
		cout << endl;
	}
	return 0;
}
