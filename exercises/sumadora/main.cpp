#include <iostream>
#include <cstdlib> // Libreria para la limpieza de la pantalla

using namespace std;

int main()
{
    system("clear");
    float suma = 0, n, acc, i = 0;
    cout << "=== Suma de Numeros ===" << endl;
    cout << endl
         << "Ingresa la cantidad de numeros a sumar: ";
    cin >> acc;
    cout << "Ingresa el numero a Sumar:" << endl;
    while (i < acc)
    {
        cin >> n;
        suma = suma + n;
        i = i + 1;
        system("clear");
    }
    cout << "Resultado: " << suma;
}