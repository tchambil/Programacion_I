#include "pch.h" 
#include "CMoto.h" 
CMoto::CMoto(TipoEntero pFilas,	TipoEntero pColumnas
) :CVehiculoTerrestre(pFilas, pColumnas)
{
	inicializarMatrizMoto(pFilas, pColumnas);
}
CMoto::~CMoto()
{

}
void CMoto::inicializarMatrizMoto(TipoEntero pFilas, TipoEntero pColumnas)
{
	TipoCaracter matrizEstatica[5][7] = {
		{' ','.','_','O','_','.',' '},
		{'/','_','\\','o','/','_','\\'},
		{' ',' ','/','H','\\',' ',' '},
		{' ','(','=','O','=',')',' '},
		{' ',' ',' ','U',' ',' ',' '}
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