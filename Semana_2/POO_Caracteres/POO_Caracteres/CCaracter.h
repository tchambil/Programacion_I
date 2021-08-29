#ifndef Caracter_00_CCaracter_H
#define Caracter_00_CCaracter_H
#include "Tipos.h"
#include <iostream>
using namespace System;
using namespace std;
class CCaracter
{
private:
	TipoPosicion m_PosX;
	TipoPosicion m_PosY;
	TipoEntero m_DesplazaX;
public:
	CCaracter();
	CCaracter(TipoPosicion _Px, TipoPosicion _Py);
	~CCaracter();

	void borrar();
	void desplazar();
	void dibujar();

};

#endif