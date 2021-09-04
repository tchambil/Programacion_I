#pragma once
#ifndef CHOFER_H
#define CHOFER_H
#include "Tipos.h"

class Chofer
{
private:
	TipoString m_NroLicencia;
	TipoString m_Nombres;
public:
	Chofer();
	virtual ~Chofer();
	void setNroLicencia(TipoString pNLicencia);
	void setNombres(TipoString pNombres);
	TipoString getNombres();
};
#endif