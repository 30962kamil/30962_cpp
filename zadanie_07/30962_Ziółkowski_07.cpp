#include <iostream>

using namespace std;


void menu() {
    cout << "Choose operation: " << endl;
    cout << "e - email" << endl;
    cout << "c - calculator" << endl;
    cout << "q - quit program." << endl;
    
}
void petla() {
    char letter = 's';
    while (letter !=  'q') {
        menu();
        cin >> letter;
    }
}
int main() {
    petla();
    return 0;
}
