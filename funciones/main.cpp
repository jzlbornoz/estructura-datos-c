#include <iostream>

using namespace std;

int suma(int a, int b)
{
    return a + b;
}

int main()
{
    int number1;
    int number2;
    cout << "Ingrese los numeros a operar: ";
    cin >> number1;
    cin >> number2;
    cout << "Resultado: " << suma(number1, number2) << endl;
}