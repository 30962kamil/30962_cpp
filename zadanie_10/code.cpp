#include <iostream>
using namespace std;
const int c = 3, r = 5;
int main()
{
	string d2_array[r][c] = {
		{"00", "01", "02" },
		{"10", "11", "12" },
		{"20", "21", "22" },
		{"30", "31", "32" }

	};
	int row, column;

	for (row = 0; row < r; row++)
	{
		for (column = 0; column < c; column++) 
		{
			cout << "Insert data to array(" << row+1 << ", " << column+1 << ")";
			cin >> d2_array[row][column];
			cout << d2_array[row][column] << endl;
		}
		cout << endl;
	}

	for (row = 0; row < r; row++)
	{
		for (column = 0; column < c; column++)
		{
			cout << d2_array[row][column] << " ";
		}
		cout << endl;
	}

}

