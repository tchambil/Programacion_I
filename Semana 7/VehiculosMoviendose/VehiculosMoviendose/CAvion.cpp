#include "pch.h" 
#include "CAvion.h"
CAvion::CAvion(TipoEntero pFilas, TipoEntero pColumnas)
				:CVehiculoAereo(pFilas, pColumnas)
{
	inicializarMatrizAvion(pFilas, pColumnas);
}

CAvion::~CAvion()
{
}
void CAvion::inicializarMatrizAvion(TipoEntero pFilas, TipoEntero pColumnas)
{
	TipoCaracter matrizEstatica[5][19] = {
		{' ',' ',' ',' ',' ',' ',' '},
		{' ',' ','─','│','─',' ',' '},
		{'=','=','0','=','=','0','=','=','(','_',')','=','=','0','=','=','0','=','='},
		{' ',' ',' ',' ',' ',' ',' '},
		{' ',' ',' ',' ',' ',' ',' '}
	}; 
	TipoCaracter** figura;
	figura = new TipoCaracter * [pFilas];
	for (size_t i = 0; i < pFilas; i++)
	{
		figura[i] = new TipoCaracter[pColumnas];
	}
	for (size_t i = 0; i < pFilas; i++)
	{
		for (size_t j = 0; j < pColumnas; j++)
		{
			figura[i][j] = matrizEstatica[i][j];
		}
	}
	SetFigura(figura);
}