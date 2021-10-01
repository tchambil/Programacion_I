#pragma once
#include "Tipos.h"
#include <random>
#include <ctime>
#include <cstdlib>
TipoEntero* GenerarLista(size_t pTamano);
void optListarElementos(TipoEntero* Vector, size_t* pTamano); 
TipoEntero* agregaElementoAlInicio(TipoEntero* pLista, size_t* pTamano, TipoEntero pElemento);
TipoEntero* optAgregaInicio(TipoEntero* pLista, size_t* pTamano);
TipoEntero* AgregaElementoAlFinal(TipoEntero* pLista, size_t* pTamano, TipoEntero pElemento);
TipoEntero* optAgregarFinal(TipoEntero* pLista, size_t* pTamano);
TipoEntero* OrdenarMayoraMenor(TipoEntero* pLista, size_t* pTamano);
TipoEntero* optOrdenarMayoraMenor(TipoEntero* pLista, size_t* pTamano);
TipoEntero* HallarMayor(TipoEntero* pLista, size_t* pTamano);
void optBuscarMayor(TipoEntero* pLista, size_t* pTamano);
TipoEntero* hallaMenor(TipoEntero* pLista, size_t* pTamano);
void OptBuscarMenor(TipoEntero* pLista, size_t* pTamano);