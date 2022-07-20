#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    system("clear");
    int table, i, mult;
    cout << "== Tabla de multiplicar" << endl
         << "Ingresa la tabla a calcular" << endl;
    cin >> table;
    system("clear");
    cout << "Tabla del " << table << ": " << endl << endl;
    for (i = 0; i <= 10; i++)
    {
        mult = i * table;
        cout << i << "x" << table << " = ";
        cout << mult << endl;
    }
};