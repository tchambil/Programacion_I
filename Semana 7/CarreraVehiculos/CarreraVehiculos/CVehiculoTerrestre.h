#pragma once
#ifndef HERENCIVEHICULO_CVehiculoTerrestre_H
#define HERENCIVEHICULO_CVehiculoTerrestre_H
#include "CVehiculo.h"
class CVehiculoTerrestre:public CVehiculo
{
public:
	CVehiculoTerrestre(TipoEntero, TipoEntero);
	~CVehiculoTerrestre(); 
};


#endif