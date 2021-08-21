#pragma once
#include "Tipos.h"
#include <ctime>
#include <cstdlib>
using namespace std;
TipoEntero* GenerarLista(size_t& pTamano);
void ListarElementos(TipoEntero* pLista, size_t pTamano);
TipoEntero* EncontrarMayor(TipoEntero* pLista, size_t pTamano);
void MostrarMayor(TipoEntero* pLista, size_t pTamano);
TipoEntero* EncontrarMenor(TipoEntero* pLista, size_t pTamano);
void MostrarMenor(TipoEntero* pLista, size_t pTamano);
TipoDouble* EncontrarPromedio(TipoEntero* pLista, size_t pTamano);
void MostrarPromedio(TipoEntero* pLista, size_t pTamano);
void MostrarPorcentaje(TipoEntero* pLista, size_t pTamano);
void Ordernar(TipoEntero* pLista, size_t pTamano);
