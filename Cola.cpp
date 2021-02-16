#include "Cola.h"

Cola::Cola():_primer(nullptr), _ultimo(nullptr)
{
}

void Cola::Agregar(Elemento* elemento)
{
    if(_primer == nullptr) // si la cola está vacía
    {
        _primer = elemento;
        _ultimo = elemento;
    }
    else //si la cola no está vacía
    {
        _ultimo->SetSiguiente(elemento);
        _ultimo = elemento;
    }
}

Elemento* Cola::Extraer()
{
    if(_primer == nullptr) // si la cola está vacía
    {
        return nullptr;
    }
    Elemento* retorno = _primer;
    _primer = _primer->GetSiguiente();
    return retorno;
}
