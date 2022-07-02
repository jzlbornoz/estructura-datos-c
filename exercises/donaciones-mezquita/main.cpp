#include <iostream>
#include <string.h>
#include <cstdlib> // Libreria para la limpieza de la pantalla

using namespace std;

int main()
{
     system("clear");
    float donacion;
    cout << "=== Bienvenido a la Mezquita ===" << endl
         << "Ingrese el monto de su ofrenda: ";
    cin >> donacion;
    if (donacion > 50)
    {
        cout << "Muchas gracias, su aporte se considera como una donacion" << endl;
    }
    else if (donacion >= 20 && donacion <= 50)
    {
        cout << "Muchas gracias, se te considera como un servidor" << endl;
    }
    else
    {
        cout << "Muchas gracias, se te considera como un orador" << endl;
    }
}