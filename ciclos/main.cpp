#include <iostream>

using namespace std;

int main()
{
    // CICLOS FOR
    int Notas[] = {
        20,
        10,
        9,
        11,
        15,
        7,
    };
    int limit = sizeof(Notas) / sizeof(Notas[0]);
    cout << "Sus Notas son: " << endl;
    for (int i = 0; i < limit; i++)
    {
        cout << "-" << Notas[i] << endl;
    }
    // While
    while (true)
    {
        char respuesta;
        cout << "Esto es un ciclo while" << endl;
        cout << "Desea terminar?(y/n): " << endl;
        cin >> respuesta;
        if (respuesta == 'y')
        {
            cout << "Hasta luego..." << endl;
            break;
        }
    }
    // Do-While
    do {
        char respuesta;
        cout << "Esto es un ciclo do-while" << endl;
        cout << "Desea terminar?(y/n): " << endl;
        cin >> respuesta;
        if (respuesta == 'y')
        {
            cout << "Hasta luego..." << endl;
            break;
        }
    } while (true);
}