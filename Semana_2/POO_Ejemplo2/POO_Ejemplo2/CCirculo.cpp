#include "CCirculo.h"

#include <iostream>


CCirculo::~CCirculo()
{

	cout<< "\nDestruyendo objeto. \n";

}
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
