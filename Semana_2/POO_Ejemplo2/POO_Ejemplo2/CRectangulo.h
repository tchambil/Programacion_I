#pragma once
#ifndef RECTANGULO_00_CRECTANGULO_H
	#define RECTANGULO_00_CRECTANGULO_H
#include "Tipos.h"

class CRectangulo
{
private:
	decimal largo;
	decimal ancho;
public:
	CRectangulo(decimal _largo, decimal _ancho);	 
	decimal area();
	decimal perimetro();
	//----metodos de acceso
 //--- setter  que permiten asignar un valor al atributo
	void setLargo(decimal _largo)
	{
		CRectangulo::largo = (_largo > 0) ? _largo : largo;
	}
	void setAncho(decimal _ancho)
	{
		CRectangulo::ancho = (_ancho > 0) ? _ancho : ancho;
	}
	//--- getters
	decimal getLargo() { return largo; }
	decimal getAncho() { return ancho; }
};
#endif //RECTANGULO_00_CRECTANGULO_H