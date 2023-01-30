#include <stdio.h>
#include <stdlib.h>
#define localizar (struct nodo*)malloc(sizeof(struct nodo))
#define p1(x) printf("Ha sido retirado el %i.\n", x)

// insertando despuEs de un nodo dado


struct nodo {
	int info;
	struct nodo *sig;
};

int insertar (p, dato)
	struct nodo **p; int dato;
	{
		struct nodo *nuevo;
		nuevo = localizar;
		nuevo->info = dato;
		
		nuevo->sig = *p;
		*p = nuevo;
		return 0;
	}

int insertar_desp (p, dato, ref)
	struct nodo **p; int dato; int ref;
	{
		struct nodo *q; q = *p;
		while ( (q!=NULL) && (q->info!=ref) ) q=q->sig; 
		if (q==NULL) printf("El nodo de referencia no existe.\n");
		else 
		{
			struct nodo *nuevo;
			nuevo = localizar;
			nuevo->info = dato;
			
			nuevo->sig=q->sig;
			q->sig=nuevo;
		}

		return 0;
	}
	
	int retirar (p)
		struct nodo **p;
		{
			if (*p==NULL) printf("Nada que retirar.\n");
			else {
				p1((*p)->info);
				struct nodo *q; q = *p;
				*p = (*p)->sig;
				free (q);
			}
			return 0;
		}
	
	int listar(p)
		struct nodo *p;
		{
			while(p != NULL) { 
				printf("%i\n",p->info); 
				p = p->sig; 
			}
			printf("\n");
		}
	
	int main() {
		struct nodo *cab; cab = NULL;
		insertar(&cab, 1); // 1er. insert
		insertar(&cab, 3); // 2do. insert
		insertar(&cab, 5); // 3ro. insert
		insertar(&cab, 7); // 4to. insert
		insertar(&cab, 9); // 5to. insert

		insertar_desp(&cab, 4, 5); // 1er. insert

		listar(cab);
		
		retirar(&cab); // 1er. retiro
		retirar(&cab); // 2do. retiro
		retirar(&cab); // 3ro. retiro
		retirar(&cab); // 4to. retiro
		retirar(&cab); // 5to. retiro
		retirar(&cab); // 6to. retiro
		retirar(&cab); // 7mo. retiro
		
		return 0;
	}
	
