#include <iostream>
using namespace std;

int main()
{
    int w_day;
    cout << "(1 - 7)\n"; cin >> w_day;

    switch (w_day) {
    case 1:
        cout << "This is Monday\n";
        break;
    case 2:
        cout << "This is Tuesday\n";
        break;
    case 3:
        cout << "This is Wednesday\n";
        break;
    case 4:
        cout << "This is Thursday\n";
        break;
    case 5:
        cout << "This is Friday\n";
        break;
    case 6:
        cout << "This is Saturday\n";
        break;
    case 7:
        cout << "This is Sunday\n";
        break;
    default:
        cout << "Number is different that expected";
    } 
    
    // part 2

    float x, y, sum, dif, div, mul;
    int z;
    cout << "Type two numbers:\nNumber one: ";
    cin >> x;
    cout << endl << "Number two: ";
    cin >> y; 
    cout << endl << "Choose operation:\n1 - Addition\n2 - Subtraction\n3 - Division\n4 - Multiplication\n:";
    cin >> z; cout << endl;

    switch (z) {
    case 1:
        sum = x + y;
        cout << x << " + " << y << " = " << sum;
        break;
    case 2:
        dif = x - y;
        cout << x << " - " << y << " = " <<  dif;
        break;
    case 3:
        div = x / y;
        cout << x << " / " << y << " = " << div;
        break;
    case 4:
        mul = x * y;
        cout << x << " * " << y << " = " << mul;
        break;
      
    }
        
    

    return 0;
}
