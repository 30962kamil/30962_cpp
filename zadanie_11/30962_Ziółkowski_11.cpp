#include <iostream>
using namespace std;

class human {
public:
    string name;

    void print_all_info() {
        cout << name << " has ID card number: " << id_card_number << ".";
    }
    human() : id_card_number(0), name("NO NAME"), phone_number(0), password("NO PASSWORD"), email("NO EMAIL") {
        cout << "Empty object of class human has been created." << endl;
    }
    human(string name_con, int id_card_number_con, int phone_number_con, string password_con, string email_con) {
        cout << "Object of class human has been created." << endl;
        name = name_con;
        id_card_number = id_card_number_con;
        phone_number = phone_number_con;
        password = password_con;
        email = email_con;
    }
    void set_info(int id_card_number_set, int phone_number_set, string password_set, string email_set) {
        id_card_number = id_card_number_set;
        phone_number = phone_number_set;
        password = password_set;
        email = email_set;
    }
    int get_id_card_number() {
        return id_card_number;
    }
    int get_phone_number() {
        return phone_number;
    }
    string get_password() {
        return password;
    }
    string get_email() {
        return email;
    }
private:
    int id_card_number, phone_number;
    string password, email;
};
    int main()
    {
        human John;
        human Susan("Susan", 333333333,1 , "a","c");
        human Rafael("Rafael", 123456789,1 ,"a","c");
        human Angelo("Angelo", 77441122, 1,"a","c");
        human Gabriel("Gabriel", 134679852,1,"a","c");

        Susan.set_info(111111, 321321321, "lol", "edek@op.pl");
        John.set_info(222222, 1212312, "qwerty123", "johny@wp.pl");
        Rafael.set_info(333333, 456456456, "passw", "Raffi@gmail.com");
        Angelo.set_info(444444, 789789789, "admin", "admin@admin.com");
        Gabriel.set_info(555555, 741741741, "abcdefg666", "Gabriel@o2.pl");

        John.print_all_info(); cout << endl;
        Susan.print_all_info(); cout << endl;
        Rafael.print_all_info(); cout << endl;
        Angelo.print_all_info(); cout << endl;
        Gabriel.print_all_info(); cout << endl;
        cout << endl << John.name << " ID card number is " << John.get_id_card_number() << ", Phone number: " << John.get_phone_number() << ", Password: " << John.get_password() << ", Email: " << John.get_email() << endl;
        cout << endl << Susan.name << " ID card number is " << Susan.get_id_card_number() << ", Phone number: " << Susan.get_phone_number() << ", Password: " << Susan.get_password() << ", Email: " << Susan.get_email() << endl;
        cout << endl << Rafael.name << " ID card number is " << Rafael.get_id_card_number() << ", Phone number: " << Rafael.get_phone_number() << ", Password: " << Rafael.get_password() << ", Email: " << Rafael.get_email() << endl;
        cout << endl << Angelo.name << " ID card number is " << Angelo.get_id_card_number() << ", Phone number: " << Angelo.get_phone_number() << ", Password: " << Angelo.get_password() << ", Email: " << Angelo.get_email() << endl;
        cout << endl << Gabriel.name << " ID card number is " << Gabriel.get_id_card_number() << ", Phone number: " << Gabriel.get_phone_number() << ", Password: " << Gabriel.get_password() << ", Email: " << Gabriel.get_email() << endl;
        return 0;
    }
