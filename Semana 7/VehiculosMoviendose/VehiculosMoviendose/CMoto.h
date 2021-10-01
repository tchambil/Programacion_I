#pragma once
#pragma once
#ifndef HERENCIVEHICULO_CMoto_H
#define HERENCIVEHICULO_CMoto_H
#include "Tipos.h"
#include "CVehiculoTerrestre.h"
class CMoto:public CVehiculoTerrestre
{

public:
	CMoto(TipoEntero, TipoEntero);
	~CMoto();

private:
	void inicializarMatrizMoto(TipoEntero, TipoEntero);
};


#endif