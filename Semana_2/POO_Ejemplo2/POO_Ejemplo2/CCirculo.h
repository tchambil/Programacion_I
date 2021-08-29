#pragma once
#ifndef CIRCULO_00_CCIRCULO_H
#define CIRCULO_00_CCIRCULO_H
#include "Tipos.h"
using namespace std;
class CCirculo
{
private:
	decimal radio;
	const decimal PI = 3.1416;
public:
	CCirculo(decimal radio);
	~CCirculo();
	CCirculo(decimal radio,decimal valor);
	CCirculo(decimal radio, decimal valor, decimal valor2);
	tipoArea  area();
	decimal   perimetro();
	//----metodos de acceso
  //--- setter 
	void setRadio(decimal _radio) { radio = _radio; }
	//--- getter
	decimal getRadio() { return radio; }
};
#endif //CIRCULO_00_CCIRCULO_H