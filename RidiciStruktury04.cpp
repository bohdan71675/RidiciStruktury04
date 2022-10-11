
#include <iostream>

using namespace std;

int main()
{
    string pole[12]{ "leden", "unor", "brezen", "duben", "kveten", "cerven", "cervenec", "spren", "zari", "rijen", "listopad", "prosinec" };
    int volba;
    cout << "\n1 = Zobrazi mesic, 2 = Zobrazi mesic az do konce roku, 3 = Konec: ";
    cin >> volba;
    while (volba != 3)
    {
        switch (volba)
        {
        case 1:
        {
            int cislo;
            cout << "Zadej cislo mesice: ";
            cin >> cislo;
            cout << pole[cislo - 1];
        }
        break;
        case 2:
        {
            int m;
            cout << "Zadej cislo mesice: ";
            cin >> m;
            for (int i = m; i <= 12; i++)
            {
                cout << pole[i - 1] << endl << endl;
            }


        }
        break;
        default:
        {
            cout << "Nevybrana moznost";
        }
        break;
        }
        cout << "\n1 = Zobrazi mesic, 2 = Zobrazi mesic az do konce roku, 3 = Konec: ";
        cin >> volba;
    }

}
