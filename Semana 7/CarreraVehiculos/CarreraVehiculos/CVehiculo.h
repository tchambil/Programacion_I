#pragma once
#ifndef HERENCIVEHICULO_CVehiculo_H
#define HERENCIVEHICULO_CVehiculo_H
#include "Tipos.h"
class CVehiculo
{
private:
	TipoDecimal m_X;
	TipoEntero m_Y;
	TipoEntero m_Dx;
	TipoEntero m_Filas;
	TipoEntero m_Columnas;
	TipoDecimal m_Velocidad;
	TipoCaracter ** m_Figura;
protected:
// TODO
public:
	CVehiculo(TipoEntero, TipoEntero);
	~CVehiculo();
	TipoEntero getX();
	TipoEntero getY(); 
	void AsignarCoordenadasXY(TipoEntero, TipoEntero);
	void MostrarFigura();
	void MoverFigura();
	void BorrarFigura();
	void SetFigura(TipoCaracter**);
	void liberarMemoriaMatriz();
};



#endif