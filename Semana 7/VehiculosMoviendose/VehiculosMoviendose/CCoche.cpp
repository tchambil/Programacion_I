#include "pch.h" 
#include "CCoche.h" 
CCoche::CCoche(TipoEntero pFilas, TipoEntero pColumnas
) :CVehiculoTerrestre(pFilas, pColumnas)
{
	inicializarMatrizMoto(pFilas, pColumnas);
}
CCoche::~CCoche()
{

}
void CCoche::inicializarMatrizMoto(TipoEntero pFilas, TipoEntero pColumnas)
{
	TipoCaracter matrizEstatica[4][13] = {
		{' ',' ','_','_','_','_','_','_',' ',' ',' ',' ',' '},
	    {' ','/','|','_','|','|','_','\\',' ','.','_','_',' '},
		{'(',' ',' ',' ','_',' ',' ',' ',' ','_',' ','_','\\'},
		{'=','´','-','(','_',')','-','-','(','_',')','-','\''},
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