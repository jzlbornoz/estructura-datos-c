#include <stdio.h>
#include <stdlib.h>
#define localizar (struct nodo*)malloc(sizeof(struct nodo))
#define p1(x) printf("Se ha sido retirado: %i.\n", x)

// retirar un nodo dado

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

	int retirar (p,dato)
		struct nodo **p; int dato;
		{
			if (*p==NULL) printf("La Lista estA vaCia.\n");
			else {
				struct nodo *q; q = *p;
				if ((*p)->info==dato) {
					p1((*p)->info);
					*p = (*p)->sig;
					free (q);			
				} 
				else
				{
					while (( q->sig!=NULL )&&( q->sig->info!=dato )) q=q->sig;
					if (q->sig==NULL) printf("El nodo de referencia no existe.\n");
					else 
					{
						struct nodo *temp; temp = q->sig;
						p1(q->sig->info); printf("\n");
						q->sig=q->sig->sig;
						free(temp);
					}
				}
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

		listar(cab);

		retirar(&cab, 5); // 1er. retiro
		
		listar(cab);
		
		return 0;
	}
	
