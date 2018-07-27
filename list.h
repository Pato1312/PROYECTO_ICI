#ifndef LISTA_H
#define LISTA_H

typedef struct Lista Lista;

Lista* createList(); /* Crea una nueva lista */

void* first(Lista* L); /* Retorna el primer dato de la lsta */

void* next(Lista* L);  /* Retorna el siguiente dato de la lsta */

void* last(Lista* L);  /* Retorna el �ltimo dato de la lsta */

void pushBack(Lista* L, void *data);   /* Inserta un dato en la �ltima posici�n de la lista */

void popCurrent(Lista* L); /* Elimina el �ltimo dato ocupado de la lista*/

#endif

