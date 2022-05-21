#include <iostream>

using namespace std;

int main()
{
    bool resultadoAnd = true && false;
    cout << "Resultado con AND: " << resultadoAnd << endl;
    bool resultadoOr = true || false;
    cout << "Resultado con Or: " << resultadoOr << endl;
    bool resultadoNot = !true;
    cout << "Resultuado con NOT: " << resultadoNot << endl;
    // condicional if
    int edad = 0;
    cout << "===========================================" << endl
         << "Ingresa tu edad: ";
    cin >> edad;
    if (edad >= 18 && edad < 60) {
        cout << "Eres mayor de Edad";
    }else if (edad >= 60){
        cout << "Eres de Edad avanzada";
    }else{
        cout << "Eres menor de edad";
    }
}