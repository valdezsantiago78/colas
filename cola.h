#ifndef COLA_H
#define COLA_H

typedef struct nodo_cola * Cola;

Cola crear();
// Crea un Cola vacio.

Cola enqueue(Cola & q, int x);
// Inserta x al final de q.

int primero(Cola q);
// Retorna el primer elemento de q.
// Pre: q no vacia.

int ultimo(Cola q);
// Retorna el ultimo elemento de q.
// Pre: q no vacia.

Cola dequeue(Cola q);
// Elimina el primer elemento de q.
// Si no hay elementos no hace nada.

bool isEmpty(Cola q);
// Retorna true si q es vacio, false en caso contrario.

Cola destruir(Cola q);
// Destruye q y libera la memoria asociada.

#endif