#include <iostream>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

struct Nodo
{
    int data;
    struct Nodo *next;
};

struct Nodo *p, *pAux, *pF;

void insertList(int number)
{
    if (p == NULL)
    {
        p = new (Nodo);
        p->data = number;
        pF = p; // Porque solo habria un elemento en la lista.
    }
    else
    {
        pAux = new (Nodo);
        pF->next = pAux;
        pAux->data = number;
        pF = pAux;
    };
    pF->next = NULL;
};

void list()
{
    pAux = p;
    while (pAux != NULL)
    {
        cout << pAux->data << endl;
        pAux = pAux->next;
    }
};

int main()
{
    int n;
    for (int i = 0; i < 4; i++)
    {
        cout << "Ingresa valor: ";
        cin >> n;
        insertList(n);
    };

    list();

    return 0;
};