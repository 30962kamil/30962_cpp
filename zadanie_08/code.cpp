#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>
using namespace std;
#define A 10
#define R 33
int random()
{
    random_device dev;
    mt19937 rng(dev());
    uniform_int_distribution<mt19937::result_type> dist6(0, 9); // distribution in range [0, 10]
    return dist6(rng);
}

int rl(int a, int b)
{
    random_device dev;
    mt19937 rng(dev());
    uniform_int_distribution<mt19937::result_type> dist6(a, b); // distribution in range [a, b]
    return dist6(rng);
}
string names[A] = {"SpongeBob" , "Patrick", "Squidward", "Sandy", "Gary", "Larry", "Pearl", "Mermaid", "Squilliam", "Dirty"},
surnames[A] = {"SquarePants","Star", "Tentacles", "Cheeks", "the Snail", "Bubble", "Man", "Puff", "the Lobster", "the Pirate"},
countries[A] = {"America", "France", "Poland", "China", "Germany", "Japan", "Canada", "Russia", "New Zeland", "Island"},
cities[A] = {"Bikini Bottom","Rock Bottom","Tentacle Acres", "Bass Vegas","Dullsville", "Bottom's Up", "New Kelp City", "Shell City", "Atlantis", "Bubble Town"},
streets[A] = {"Jellyfish", "Krusty", "Bubble", "Mermaid", "Kelp", "Coral", "Barnacle", "Anemone", "Square", "Goo"};

string r_names[R], r_surnames[R], r_countries[R], r_cities[R], r_streets[R];
int rok[R], nr_dom[R], nr_phone1[R], nr_phone2[R], nr_phone3[R];

int main()
{
    cout << "NR - NAME & SURNAME - COUNTRY - CITY - STREET - Y.O. - HOUSE NR - PHONE NUMBER \n --------------------------------------------------------------------------------- \n";
    for (int i = 0; i < R; i++) {
        r_names[i] = names[random()];
        r_surnames[i] = surnames[random()];
        r_countries[i] = countries[random()];
        r_cities[i] = cities[random()];
        r_streets[i] = streets[random()];
        rok[i] = rl(0, 4000) - 2000;
        nr_dom[i] = rl(0, 77);
        nr_phone1[i] = rl(100, 999);
        nr_phone2[i] = rl(100, 999);
        nr_phone3[i] = rl(100, 999);
        cout << i+1 << ". ";
        cout << r_names[i] << " ";
        cout << r_surnames[i] << " | ";
        cout << r_countries[i] << " | ";
        cout << r_cities[i] << " | "; 
        cout << r_streets[i] << " | ";
        cout << rok[i] << " | ";
        cout << nr_dom[i] << " | ";
        cout << nr_phone1[i] << "-" << nr_phone2[i] << "-" << nr_phone3[i] << "\n";
        
    }

		return 0;
}
