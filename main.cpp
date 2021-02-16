#include "Cola.h"
#include <iostream>

using namespace std;
int main()
{
    Elemento* uno = new Elemento("Uno");
    Elemento* dos = new Elemento("Dos");
    Elemento* tres = new Elemento("Tres");
    Cola* cola = new Cola();
    cola->Agregar(uno);
    cola->Agregar(dos);
    cola->Agregar(tres);

    Elemento* i = cola->Extraer();

    while(i != nullptr)
    {
        cout << i->GetNombre() << endl;
        i = cola->Extraer();
    }
    return 0;
}
