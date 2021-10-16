
#pragma once
#ifndef GRAFICOS_CRectangulo_H
#define GRAFICOS_CRectangulo_H
#include "Tipos.h"
class CRectangulo
{
private:
	TipoEntero m_ancho;
	TipoEntero m_alto;
	TipoEntero m_inicioX;
	TipoEntero m_inicioY;
public:
	CRectangulo();
	~CRectangulo(); 
	TipoEntero getInicioX();
	void setInicioX(TipoEntero inicioX);
	TipoEntero getInicioY();
	void setInicioY(TipoEntero inicioY);
	TipoEntero getAncho();
	void setAncho(TipoEntero ancho);
	TipoEntero getAlto();
	void setAlto(TipoEntero alto);
	//comportamiento
	TipoEntero hallaArea();
};
#endif