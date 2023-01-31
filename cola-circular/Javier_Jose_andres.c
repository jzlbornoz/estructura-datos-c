#include <stdio.h>
#include <stdlib.h>
#define localizar (struct nodo *)malloc(sizeof(struct nodo))
#define p1(x) printf("Ha sido retirado el %i.\n", x)

// insertando al final y retirando en la cabecera

struct nodo
{
	int info;
	struct nodo *sig;
	struct nodo *ant;
};

int insertar(p, dato)
struct nodo **p;
int dato;
{
	struct nodo *nuevo;
	nuevo = localizar;
	nuevo->info = dato;

	if (*p == NULL)
	{
		nuevo->sig = nuevo;
		nuevo->ant = nuevo;
		*p = nuevo;
	}
	else
	{
		nuevo->ant = (*p)->ant;
		nuevo->sig = *p;
		(*p)->ant->sig = nuevo;
		(*p)->ant = nuevo;
		*p = nuevo;
	}
	return 0;
}

int insertarNodoDado(p, dato, ref)
struct nodo **p;
int dato;
int ref;
// Javier Albornoz 30372851
// Jose Bustamante 30188611
// Andres Mendez 29886930
{
	struct nodo *nuevo;
	nuevo = localizar;
	nuevo->info = dato;
	struct nodo *q;
	q = *p;
	while ((q->info != ref))
		q = q->sig;
	if (q == NULL)
	{
		nuevo->sig = nuevo;
		nuevo->ant = nuevo;
		*p = nuevo;
	}
	else
	{
		nuevo->ant = (q)->ant;
		nuevo->sig = q;
		(q)->ant->sig = nuevo;
		(q)->ant = nuevo;
		q = nuevo;
	}
	return 0;
}

int retirar(p)
struct nodo **p;
{
	if (*p == NULL)
		printf("Nada que retirar.\n");
	else
	{
		p1((*p)->info);
		struct nodo *q;
		q = *p;
		if ((*p)->sig == *p)
			*p = NULL;
		else
		{
			(*p)->ant->sig = (*p)->sig;
			(*p)->sig->ant = (*p)->ant;
			*p = (*p)->sig;
		}
		free(q);
	}
	return 0;
}

int listar_hacia_adelante(p)
struct nodo *p;
{
	if (p == NULL)
		printf("La Lista estA vaCia.\n");
	else
	{
		struct nodo *q;
		q = p;
		do
		{
			printf("%i\n", q->info);
			q = q->sig;

		} while (q != p);
		printf("\n");
	}
	return 0;
}

int listar_hacia_atras(p)
struct nodo *p;
{
	if (p == NULL)
		printf("La Lista estA vaCia.\n");
	else
	{
		struct nodo *q;
		q = p;
		do
		{
			q = q->ant;
			printf("%i\n", q->info);

		} while (q != p);
		printf("\n");
	}
	return 0;
}

int main()
{
	struct nodo *cab;
	cab = NULL;
	insertar(&cab, 1);			   // 1er. insert
	insertar(&cab, 3);			   // 2do. insert
	insertar(&cab, 5);			   // 3ro. insert
	insertar(&cab, 7);			   // 4to. insert
	insertar(&cab, 9);			   // 5to. insert
	insertarNodoDado(&cab, 10, 5); // 2do. insert

	listar_hacia_adelante(cab);
	listar_hacia_atras(cab);

	retirar(&cab); // 1er. retiro
	retirar(&cab); // 2do. retiro
	retirar(&cab); // 3ro. retiro
	retirar(&cab); // 4to. retiro
	retirar(&cab); // 5to. retiro
	retirar(&cab); // 6to. retiro
	retirar(&cab); // 7mo. retiro

	return 0;
}
