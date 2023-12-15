#include <iostream>
#include <random>
using namespace std;
const int c = 200, r = 10;
int rl(int a, int b)
{
	random_device dev;
	mt19937 rng(dev());
	uniform_int_distribution<mt19937::result_type> dist6(a, b); // distribution in range [a, b]
	return dist6(rng);
}
int main()
{
	int d2_array[r][c];
	int row, column;

									// RANDOM NR GENERATOR (-100, 100)
	for (row = 0; row < r; row++)
	{
		for (column = 0; column < c; column++)
		{
			d2_array[row][column] = rl(0, 200) - 100;
		}
	}
									// MAX VALUE
	for (row = 0; row < r; row++)
	{
		int highNum = -100;
		for (column = 0; column < c; column++)
		{
			if (d2_array[row][column] > highNum)
				highNum = d2_array[row][column];
		}
		cout << "Max value for row " << row << " is: " << highNum;
		if (highNum < 80) { cout << " !*!*!*!*!*!*!*!*!*!*!*!"; }
		cout << endl;
	}
	return 0;
}
