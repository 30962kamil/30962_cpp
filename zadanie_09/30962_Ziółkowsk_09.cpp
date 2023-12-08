#include <iostream>
using namespace std;

class human_trafficing {
public:
    string id, skin_color;
    float height, mass;
    int price;
  
    void print_human_info() {
        cout << id << "'s info: " << mass << "kg, " << height << "m, " << skin_color << " skin.\n";
    }
    void print_name_and_year() {
        cout << id << " was born in " << year << ".\n";
    }
    void print_name_and_price() {
        cout << id << " is worth " << price << " Polish gold.\n";
    }
    void connect() {
        print_human_info();
        print_name_and_year();
        print_name_and_price();
    }
private:
    int year;
};

int main()
{
    human_trafficing John;
    human_trafficing Susan;
    human_trafficing Arthur;
    human_trafficing Eva;
    John.id = "John";
    John.price = 10000;
    John.mass = 77;
    John.height = 1.7;
    John.skin_color = "Asian-ish";
    //John.year = 1977;
    Susan.id = "Susan";
    Susan.price = 5000;
    Susan.mass = 54;
    Susan.height = 1.9;
    Susan.skin_color = "Indian-ish";
    //Susan.year = 1999;
    Arthur.id = "Arthur";
    Arthur.price = 7999;
    Arthur.mass = 99;
    Arthur.height = 1.8;
    Arthur.skin_color = "Black";
    Eva.id = "Eva";
    Eva.price = 4000;
    Eva.mass = 56;
    Eva.height = 1.6;
    Eva.skin_color = "White";
                                         // output 
    John.connect();
    Susan.connect();
    Arthur.connect();
    Eva.connect();

    return 0;
}
