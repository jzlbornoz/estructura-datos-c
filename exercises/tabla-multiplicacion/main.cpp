#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    system("clear");
    int table, i, mult;
    char r = 'n';
    while (r == 'n')
    {
        cout << "== Tabla de multiplicar" << endl
             << "Ingresa la tabla a calcular" << endl;
        cin >> table;
        system("clear");
        cout << "Tabla del " << table << ": " << endl
             << endl;
        int i = 0;
        while (i <= 10)
        {
            mult = i * table;
            cout << i << "x" << table << " = ";
            cout << mult << endl;
            i = i + 1;
        }
        cout << endl;
    }
};
