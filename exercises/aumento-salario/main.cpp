#include <iostream>
#include <cstdlib> // Libreria para la limpieza de la pantalla

using namespace std;

int main()
{
    system("clear");
    float sueldo;
    cout << "===INGRESA TU SUELDO===" << endl;
    cin >> sueldo;
    if (sueldo <= 200)
    {
        float porcentajeUP = sueldo / 2;
        float nuevoSueldo = sueldo + porcentajeUP;
        cout << "Debes reclamar un aumento del 50%, tu nuevo sueldo sera de: " << nuevoSueldo << endl;
    }
    else if (sueldo >= 200 && sueldo <= 500)
    {
        float porcentajeUp = sueldo / 5;
        float nuevoSalario = sueldo + porcentajeUp;
        cout << "Debes reclamar un aumento del 20%, tu nuevo sueldo sera de: " << nuevoSalario << endl;
    }
    else
    {
        cout << "Tienes un buen sueldo, no necesitas un aumento" << endl;
    }
}