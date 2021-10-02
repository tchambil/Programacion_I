#pragma once 
#ifndef HERENCIVEHICULO_CCarrera_H
#define HERENCIVEHICULO_CCarrera_H
#include "Tipos.h"
#include "CMoto.h"
#include "CCoche.h"
class CCarrera
{

private:
	//CMoto* objMoto;
	//CCoche* objCoche;
	shared_ptr<CCoche> ptrCoche;
	shared_ptr<CMoto> ptrMoto;
public:
	CCarrera();
	~CCarrera();
	void iniciarCarrera();
	TipoEntero m_Meta;

};


#endif