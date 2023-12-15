#include <iostream>
using namespace std;
const int c = 3, r = 5;
int main()
{
	string d2_array[r][c] /* = {
		{"00", "01", "02" },
		{"10", "11", "12" },
		{"20", "21", "22" },
		{"30", "31", "32" },
		{"40", "41", "42" },
		 
	}*/;
	int row, column;
									//  checker
	for (row = 0; row < r; row++)
	{
		for (column = 0; column < c; column++)
		{
			cout << "Array[" << row << "]" << "[" << column << "] = ";
			cout << d2_array[row][column] << " \n";
		}
								
	}
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
	for (row = 0; row < r; row++)
	{
		for (column = 0; column < c; column++)
		{
			cout << d2_array[row][column] << " ";
		}
		cout << endl;
	}
									// checker
	for (row = 0; row < r; row++)
	{
		for (column = 0; column < c; column++)
		{
			cout << "Array[" << row << "]" << "[" << column << "] = ";
			cout << d2_array[row][column] << " \n";
		}

	}

}

/*for (row = 0; row < r; row++)
{
	for (column = 0; column < c; column++)
	{
		cout << d2_array[row][column] << " ";
	}
	cout << endl;
}
	}
	for (int i = 0; i < r * c; i++) {
		cout << "Array[" << row << "]" << "[" << column << "]" << endl;
		row + 1; column + 1;
	}
*/
