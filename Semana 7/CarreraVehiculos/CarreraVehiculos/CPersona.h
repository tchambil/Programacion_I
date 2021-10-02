#pragma once 
#ifndef HERENCIVEHICULO_CPersona_H
#define HERENCIVEHICULO_CPersona_H
#include "Tipos.h"
class CPersona 
{
private:
	TipoDecimal m_X;
	TipoEntero m_Y;
	TipoEntero m_Dx;
	TipoEntero m_Filas;
	TipoEntero m_Columnas;
	TipoDecimal m_Velocidad;
	TipoCaracter** m_Figura;
public:
	CPersona(TipoEntero, TipoEntero);
	~CPersona();

	void inicializarMatrizPersona(TipoEntero, TipoEntero);
 
	TipoEntero getX();
	TipoEntero getY();
	void AsignarCoordenadasXY(TipoEntero, TipoEntero);
	void MostrarFigura();
	void MoverFigura();
	void MoverFiguraUp(TipoDecimal pY);
	void MoverFiguraDown(TipoDecimal pY);
	void MoverFiguraLeft(TipoDecimal pX);	
	void MoverFiguraRight(TipoDecimal pX);
	void BorrarFigura();
	void SetFigura(TipoCaracter**);
	void liberarMemoriaMatriz();
};

#endif
