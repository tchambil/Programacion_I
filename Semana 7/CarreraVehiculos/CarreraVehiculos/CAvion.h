#pragma once
#ifndef HERENCIVEHICULO_CAvion_H
#define HERENCIVEHICULO_CAvion_H
#include "CVehiculoAereo.h"
class CAvion:public CVehiculoAereo
{
public:
	CAvion(TipoEntero, TipoEntero);
	~CAvion();

private:
	void inicializarMatrizAvion(TipoEntero, TipoEntero);
};

#endif

