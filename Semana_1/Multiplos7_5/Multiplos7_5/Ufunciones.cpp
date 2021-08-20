#include "Ufunciones.h"

#include <iomanip>

void Imprimir(TipoEntero* ptr, size_t cant) {
    
    for (size_t i = 0; i < cant; i++) {
        cout << *(ptr + i) << setw(10);
    } 
}
