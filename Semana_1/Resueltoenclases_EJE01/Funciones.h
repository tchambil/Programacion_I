#pragma once
#include "Tipos.h"
#include <ctime>
#include <cstdlib>
TipoEntero* GenerarLista(size_t pTamano);
void optListarElementos(TipoEntero* pLista, size_t* pTamano);
TipoEntero* HallarMayor(TipoEntero* pLista, size_t* pTamano);
void optBuscarMayor(TipoEntero* pLista, size_t* pTamano);

TipoEntero* hallaMenor(TipoEntero* pLista, size_t* pTamano);
void OptBuscarMenor(TipoEntero* pLista, size_t* pTamano);

void optOrdenarMayoraMenor(TipoEntero* pLista, size_t* pTamano);

