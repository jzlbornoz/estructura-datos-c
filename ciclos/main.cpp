#include <iostream>

using namespace std;

int main()
{   
    //CICLOS FOR
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
}