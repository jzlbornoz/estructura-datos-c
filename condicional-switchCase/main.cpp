#include <iostream>

using namespace std;

int main()
{
    cout << "Ingresa el numero 1 para ver tu nota final" << endl;
    cout << "Ingresa el numero 2 para saber la hora de tu clase" << endl;
    int option = '0';
    cin >> option;
    switch (option)
    {
    case 1:
        cout << "Tu nota final es de 20pts" << endl;
        break;
    case 2:
        cout << "Tu clase incia a las 10am" << endl;
        break;
    default:
        cout << "El numero que ustes marco no esta disponible, por favor eliga un numero entre el 1 y 2"
             << endl;
        break;
    }
}