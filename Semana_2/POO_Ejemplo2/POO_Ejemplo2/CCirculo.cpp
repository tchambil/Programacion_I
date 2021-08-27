#include "CCirculo.h"

CCirculo::CCirculo(decimal radio)
{
	this->radio = radio;
}

tipoArea CCirculo::area()
{
	return this->PI * this->radio * this->radio;
}

decimal CCirculo::perimetro()
{
	return this->PI * this->radio * 2;
}
