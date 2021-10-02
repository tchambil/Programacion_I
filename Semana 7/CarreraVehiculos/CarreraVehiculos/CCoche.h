#pragma once
#ifndef HERENCIVEHICULO_CCoche_H
#define HERENCIVEHICULO_CCoche_H
#include "CVehiculoTerrestre.h"
class CCoche :public CVehiculoTerrestre
{

public:
	CCoche(TipoEntero, TipoEntero);
	~CCoche();

private:
	void inicializarMatrizMoto(TipoEntero, TipoEntero);
};

#endif