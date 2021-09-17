#pragma once
#include "CPelota.h"
class CLanzador
{
private:
	CPelota** m_Arreglo;
	Entero* m_Cantidad;
public:
	CLanzador();
	~CLanzador();
	void AgregarPelota(CPelota* pObjeto);
	CPelota* ObtenerPelota(Entero pIndice);
	void MostrarPelotas();
	Entero ObtenerCantidad();

};

