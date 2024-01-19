#include <iostream>
using namespace std;
class company {
    public:
        string name, product, agent, email;
        int phone_number;
        void getname();
        void getproduct();
        void getagent();
        void getemail();
        void getphone_number();
        void getTIN();
        void getprice();
        void printinfo();

        void set_info(string name_set, string product_set, string agent_set, string email_set, int phone_number_set, int TIN_set, float price_set);
    private:
        int TIN;
        float price;
};
void company::set_info(string name_set,string product_set, string agent_set, string email_set, int phone_number_set, int TIN_set, float price_set) {
    name = name_set;
    product = product_set;
    agent = agent_set;
    email = email_set;
    phone_number = phone_number_set;
    TIN = TIN_set;
    price = price_set;
}
void company::getname()
{
    cout << "Company's name = ";
    cin >> name;
}
void company::getproduct()
{
    cout << "Company's product name = ";
    cin >> product;
}
void company::getprice()
{
    cout << "Company's product price = ";
    cin >> price;
}
void company::getagent()
{
    cout << "Company's agent info = ";
    cin >> agent;
}
void company::getemail()
{
    cout << "Company's email= ";
    cin >> email;
}
void company::getphone_number()
{
    cout << "Company's phone number = ";
    cin >> phone_number;
}
void company::getTIN()
{
    cout << "Company's TIN = ";
    cin >> TIN;
}
void company::printinfo()
{
    cout << "Company's name : " << name << "\n";
    cout << "Company's product name : " << product << "\n";
    cout << "Company's product price : " << price << "\n";
    cout << "Company's agent info : " << agent << "\n";
    cout << "Company's email : " << email << "\n";
    cout << "Company's phone number : " << phone_number << "\n";
    cout << "Company's TIN : " << TIN << "\n";
}

const int nr = 7;

// Driver code
int main()
{
    company list[nr];
    for (int i = 0; i < nr; i++)
    {
        cout << "Company  : " << (i + 1) << "\n";
        list[i].getname();
        list[i].getproduct();
        list[i].getprice();
        list[i].getagent();
        list[i].getemail();
        list[i].getphone_number();
        list[i].getTIN();
    }

    for (int i = 0; i < nr; i++)
    {
        cout << "Item Details : " << (i + 1) << "\n";
        list[i].printinfo();
    }
}
