#include <iostream>
#include <algorithm>
using namespace std;

float multiply(float n1, float n2) {
    return n1 * n2;
}
float summation(float n1, float n2) {
    return n1 + n2;
}
float subtraction(float n1, float n2) {
    return n1 - n2;
}
float division(float n1, float n2) {
    if (n2 != 0) {
        return n1 / n2;
    }
    else
        return 0;
}

void count(float x,float y) {
    cout << x << " + " << y << " = " << summation(x, y) << endl;
    cout << x << " - " << y << " = " << subtraction(x, y) << endl;
    cout << x << " * " << y << " = " << multiply(x, y) << endl;
    cout << x << " / " << y << " = " << division(x, y) << endl;
}

void maxNumchecker(float x, float y) {
    float maxNum = max({ summation(x,y),subtraction(x,y), multiply(x,y), division(x,y) });
    if (maxNum == summation(x, y)) {
        cout << "The higest number is provided by summation" << endl;
    }
    else if (maxNum == subtraction(x, y)) {
        cout << "The higest number is provided by subtraction" << endl;
    }
    else if (maxNum == multiply(x, y)) {
        cout << "The higest number is provided by multiplication" << endl;
    }
    else if (maxNum == division(x, y)) {
        cout << "The higest number is provided by division" << endl;
    }
    else {
        cout << "something wrong...";
    }
}
/*void part2() {
    float x, y;
    cout << "Type two numbers to multiply: "; cin >> x >> y;
    cout << "This is your result : " << multiply(x, y) << endl;
}
void part3() {
    float x, y;
    cout << "Type two numbers: "; cin >> x >> y;
    count()
}*/
void part456() {
    float x, y, y1;
    int z;
    cout << "Type two numbers: "; cin >> x >> y;
    y1 = y;
    z = 0;
    if (x <= y) {
        for (x = x; x <= y1; x++, y--) {
            z++;
            cout << "COUNT" << z << endl;
            count(x,y);
            maxNumchecker(x, y);
        }

    }

    else if (x >= y) {
        for (x = x; x >= y1; y++, x--) {
            z++;
            count(x, y);
            maxNumchecker(x, y);
            }
        }

    
    else {
        cout << "ERROR";
    }
}

int main()

{
    //part2();
    //part3();
    part456();
    return 0;
}
