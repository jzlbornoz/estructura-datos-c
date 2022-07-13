#include <iostream>
#include <cstdlib> // Libreria para la limpieza de la pantalla

using namespace std;

int suma(float a, float b)
{
    int result = a + b;
    return result;
}
int res(float a, float b)
{
    int result = a - b;
    return result;
}
int mult(float a, float b)
{
    int result = a * b;
    return result;
}
int div(float a, float b)
{
    if (a > b)
    {
        int result = a / b;
        return result;
    }
    else
    {
        return false;
    }
}

int main()
{
    system("clear");
    int opcion;
    float c, d;
    char exit = 'n';
    cout << "=== Calculadora ===" << endl;

    do
    {
        cout << "Ingresa los valores a trabajar: " << endl;
        cin >> c;
        cin >> d;
        cout << "OPERACIONES: " << endl
             << "1: Sumar" << endl
             << "2: Restar" << endl
             << "3: Multiplicar" << endl
             << "4: Dividir" << endl
             << "5: Salir" << endl;
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            system("clear");
            cout << suma(c, d) << endl
                 << endl;
            break;
        case 2:
            system("clear");
            cout << res(c, d) << endl
                 << endl;
            break;
        case 3:
            system("clear");
            cout << mult(c, d) << endl
                 << endl;
            break;
        case 4:
            system("clear");
            cout << div(c, d) << endl
                 << endl;
            break;
        case 5:
            exit = 'y';
            cout << "Saliendo ... " << endl;
            break;
        default:
            system("clear");
            cout << "Ingresa una opcion valida: " << endl;
            break;
        }
    } while (exit == 'n');
}