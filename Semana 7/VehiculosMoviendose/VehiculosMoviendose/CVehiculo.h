#pragma once
#ifndef HERENCIVEHICULO_CVehiculo_H
#define HERENCIVEHICULO_CVehiculo_H
#include "Tipos.h"
class CVehiculo
{
private:
	TipoEntero m_X;
	TipoEntero m_Y;
	TipoEntero m_Dx;
	TipoEntero m_Filas;
	TipoEntero m_Columnas;
	TipoCaracter ** m_Figura;
protected:
// TODO
public:
	CVehiculo(TipoEntero, TipoEntero);
	~CVehiculo();
	void AsignarCoordenadasXY();
	void MostrarFigura();
	void MoverFigura();
	void BorrarFigura();
	void SetFigura(TipoCaracter**);
	void liberarMemoriaMatriz();
};



#endif