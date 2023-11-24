#include <iostream>
using namespace std;

string name, gender, f_city , c_hair;
int age, weight, x, y;
float z, l_hair;

int main()
{
    cout << "Welcome in my application!" << endl << endl << "Tell me... What is your name?: ";
    cin >> name;
    cout << "Hi there, " << name << "!" << endl << endl;

    cout << "What is your gender?: ";
    cin >> gender;
    cout << "Your gender is: " << gender << endl << endl;

    cout << "How old are you (this year)?: ";
    cin >> age;
    cout << "You are: " << age << endl << endl;

    cout << "What is your favourite city?: ";
    cin >> f_city;
    cout << "Your favourite city is: " << f_city << endl << endl;

    cout << "What is your weight?: ";
    cin >> weight;
    cout << "Your weight is: " << weight << endl << endl;
 

    cout << "I calculated that your birth year is probably " << 2023-age << "!" << endl << endl;
    cout << "Type two numbers" << endl; cin >> x >> y;
    cout << "sum: " << x + y << " diff: " << x - y << " product: " << x / y << " quotient: " << x * y << endl << endl;
   
    cout << "Dividing 39 by 10: " << endl;
    float z = (float)39/10;
    cout << z << endl << endl;

    cout << "Type your length and color of your hair (ex. 10 red) : ";
    cin >> l_hair >> c_hair;
    cout << l_hair << " " <<  c_hair;
    return 0;
}
