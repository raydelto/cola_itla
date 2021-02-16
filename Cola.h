#pragma once
#include "Elemento.h"

class Cola
{
public:
    Cola();
    void Agregar(Elemento* elemento);
    Elemento* Extraer();

private:
    Elemento* _primer;
    Elemento* _ultimo;
};
