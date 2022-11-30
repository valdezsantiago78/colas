#include "cola.h"
#include <iostream>

struct nodo_cola
{
    int dato;
    Cola sig;
};

Cola crear()
{
    return NULL;
};

bool isEmpty(Cola q)
{
    if(q == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
};

Cola enqueue(Cola & q, int x)
{
    Cola primero = q;

    Cola aux = new(nodo_cola);
    aux->dato = x;

    if(q == NULL)
    {
        aux->sig = NULL;
        q = aux;
    }else
    {
        while(q->sig != NULL)
        {
            q = q->sig;
        }       
        aux->sig = NULL;
        q = aux;
    }

    return primero;
};