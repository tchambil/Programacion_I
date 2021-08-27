#include "CRectangulo.h"

CRectangulo::CRectangulo(decimal _largo, decimal _ancho)
{
	this->largo = _largo;
	this->ancho = _ancho;
}
decimal CRectangulo::area()
{
	return (largo * ancho);
}
decimal CRectangulo::perimetro()
{
	return(2 * largo + 2 * ancho);
}