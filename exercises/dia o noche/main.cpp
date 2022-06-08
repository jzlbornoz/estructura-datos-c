#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int time;
    string nombre;
    cout << "Bienvenido, Por favor ingresa tu nombre y la hora que es actualmente (Formato 24h): "
         << endl
         << "Hora: ";
    cin >> time;
    cout << "Nombre: ";
    cin >> nombre;

    if (time < 7)
    {
        cout << "Deberias estar durmiendo son las " << time
             << "am, "
             << nombre << endl;
    }

    else if (time > 7 && time < 12)
    {
        cout << "Buen dia " << nombre << endl;
    }
    else if (time == 12)
    {
        cout << "Buen Provecho " << nombre << endl;
    }
    else if (time > 13 & time < 19)
    {
        cout << "Buenas Tardes " << nombre << endl;
    }
    else if (time > 19 && time < 24)
    {
        cout << "Buenas Noches " << nombre << endl;
    }
    else
    {
        cout << "Error: La Hora ingresada no es valida" << endl;
    }
}