#include "CRectangulo.h"
CRectangulo::CRectangulo()
{
	m_ancho = 0;
	m_alto = 0;
	m_inicioX = 0;
	m_inicioY = 0;
}
CRectangulo::~CRectangulo()
{
	
}
TipoEntero CRectangulo::getInicioX()
{
	return m_inicioX;
}
void CRectangulo::setInicioX(TipoEntero inicioX)
{
	this->m_inicioX = inicioX;
}
TipoEntero CRectangulo::getInicioY()
{
	return m_inicioY;
}
void CRectangulo::setInicioY(TipoEntero inicioY)
{
	this->m_inicioY = inicioY;
}
TipoEntero CRectangulo::getAncho()
{
	return m_ancho;
}
void CRectangulo::setAncho(TipoEntero ancho)
{
	this->m_ancho = ancho;
	
}
TipoEntero CRectangulo::getAlto()
{
	return m_alto;
}
void CRectangulo::setAlto(TipoEntero alto)
{
	this->m_alto = alto;
}
//comportamiento
TipoEntero CRectangulo::hallaArea()
{
	return m_ancho * m_alto;
}