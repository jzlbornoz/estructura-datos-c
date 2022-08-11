#include <iostream>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

int main()
{
    int numeros[] = {10,
                     0,
                     30,
                     14,
                     50,
                     26,
                     74,
                     18,
                     90,
                     2};
    int option;
    int matriz1[3][4];
    int matriz2[3][4];
    int matriz3[3][4];
    // --
    system("clear");
    cout << "Ingrese 1 para obtener el resultado de ejercicio 4 y 5 de Vectores: " << endl;
    cout << "Ingrese 2 para obtener el resultado de ejercicio 2 de Matrices: " << endl;
    cin >> option;

    switch (option)
    {
    case 1:
        cout << "== Ejercicio 4 y 5 ==" << endl;
        for (int i = 9; i > 0; i--)
        {
            cout << numeros[i] << endl;
            if (numeros[i] == 0)
            {
                cout << "== Si hay un 0 ==" << endl;
            }
        };
        break;

    case 2:
        system("clear");

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cout << "Ingresa los datos de la primera matriz: ";
                cin >> matriz1[i][j];
                cout << "Ingresa los datos de la segunda matriz: ";
                cin >> matriz2[i][j];
                matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
            }
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cout << matriz1[i][j] << " + " << matriz2[i][j] << " = " << matriz3[i][j] << endl;
            }
        }
        break;

    default:
        cout << "No se ha hecho ese ejercicio :(" << endl;
        break;
    }
}