#pragma once
#ifndef GRAFICOS_CCirculo_H
#define GRAFICOS_CCirculo_H
#include "Tipos.h"
using namespace System::Drawing;
class CCirculo
{
private:
	TipoEntero m_X;
	TipoEntero m_Y;
	TipoEntero m_Dx;
	TipoEntero m_Dy;
	TipoEntero m_Diametro;
public:
	CCirculo();
	~CCirculo();
	CCirculo(TipoEntero pX, TipoEntero pY, TipoEntero pDiamentro);
	void borraCirculo(Graphics^ g);
	void dibujaCirculo(Graphics^ g);
	void cambiaPosicion(Graphics^ g);
	void moverCirculo(Graphics^ g);
};


#endif