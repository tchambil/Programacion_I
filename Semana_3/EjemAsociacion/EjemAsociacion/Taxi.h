#pragma once
#ifndef TAXI_H
#define TAXI_H
#include "Chofer.h"
#include "Tipos.h"

class Taxi
{
private:
	TipoString m_Placa;
	TipoString m_Marca;
	TipoString m_Modelo;
	Chofer* m_Chofer; //asociando con chofer

public:
	Taxi();
	virtual ~Taxi();
	void setPlaca(TipoString pPlaca);
	void setMarca(TipoString pMarca);
	void setModelo(TipoString pModelo);
	TipoString getPlaca();
	void setChofer(Chofer* pChofer);//seteando chofer
	void imprimirDatos(ostream& os);// sobrecarga de operador para imprimir
};
#endif