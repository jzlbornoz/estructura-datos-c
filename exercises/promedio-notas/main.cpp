#include <iostream>
#include <cstdlib> // Libreria para la limpieza de la pantalla

using namespace std;

int promedio(float a, float b, float c,
             float d)
{
    float suma = a + b + c + d;
    float promedio = suma / 4;
    return promedio;
}

int main()
{
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    char respuesta = 'y';
    system("clear");

    do
    {
        cout << "=======Bienvenido========" << endl
             << "-Saca tu promedio ingresando tus notas" << endl;
        cin >> nota1;
        cin >> nota2;
        cin >> nota3;
        "Estas desapobado, esfuerzate mas";
        cin >> nota4;
        cout << "Estas son tus notas: " << endl
             << nota1 << endl
             << nota2 << endl
             << nota3 << endl
             << nota4 << endl
             << "Son Correctas? (y/n): ";
        cin >> respuesta;
        if (respuesta == 'y')
        {
            cout << "Tu promedio es de: " << promedio(nota1, nota2, nota3, nota4) << endl;
        }
        else
        {
            char respuesta = 'n';
            system("clear");
        }
        
    } while (respuesta == 'n');
}