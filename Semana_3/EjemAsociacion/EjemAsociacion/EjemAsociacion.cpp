 
#include "Chofer.h"
#include "Taxi.h"

int main()
{
    Chofer* ptrJuan = new Chofer();
    Taxi* ptrToyota = new Taxi();
    ptrJuan->setNombres("Juan Perez");
    ptrToyota->setPlaca("ABC123");
    ptrToyota->setChofer(ptrJuan);
    ptrToyota->imprimirDatos(cout);
}

 