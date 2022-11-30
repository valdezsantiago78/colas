#include <iostream>
#include "cola.h"
#include "helper.h"

using namespace std;

void Menu()
{
    bool salir = true;
    bool creado = false;

    while(salir)
    {
        int opcion;
        Cola q;
        
        cout << "---------------------------------------------------------------------" << endl;
        cout << "---------------------------------------------------------------------" << endl;
        cout << ">>> INGRESE UNA OPCION <<<" << endl; 
        cout << "1. Crear cola." << endl;
        cout << "2. Encolar dato." << endl;
        cout << "3. Está vacia?." << endl;
        cout << "0. Salir." << endl;
        
        cin >> opcion;
        
        if(opcion == 1 && creado != true)
        {
            q = crear();
            creado = true;
            Succes("Cola creada!");
        }
        else if(opcion == 2 && creado == true)
        {
            int dt;
            cout << "Ingresar dato >" << endl;
            cin >> dt;
            enqueue(q, dt);
            Succes("Ingresando dato..");
        }    
        else if(opcion == 3 && creado == true)
        {
            if(isEmpty(q))
            {
                Succes("Cola vacia.");
            }
            else
            {
                Error("Cola con elementos.");
            }
        }       
        else if(opcion == 0)
        {
            salir = false;
        }        
        else
        {
            cout << "Usted eligio la opcion: ";
            cout << opcion << endl;
            Error("ESA OPCION NO EXISTE O VERIFIQUE QUE ESTE CREADO LA COLA. (opc 1)");
        } 
    }
}

int main(){
    
    std::cout << "Programa de colas - Estructuras de datos y algoritmos - Santiago Valdez." << std::endl;
    
    Menu();
    
    return 1;
}



