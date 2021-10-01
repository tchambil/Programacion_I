#include "Menu.h"
#include "Tipos.h"

TipoEntero* GenerarLista(size_t pTamano)
{
	srand(time(nullptr));
	TipoEntero*  pLista = new TipoEntero[pTamano];
	for (size_t i = 0; i < pTamano; i++) {
		*(pLista + i) = rand() % 1000; 
	}
	return pLista;
}

void optListarElementos(TipoEntero* pLista, size_t* pTamano)
{

	cout << "1. LISTAR ELEMENTOS" << endl;
	cout << TipoString(12, '-') << "\n\n";

	for (auto i = 0; i < *pTamano;i++)
	{
		if (i == *pTamano - 1)
		 cout<<pLista[i]<<endl;
		else
		 cout<<pLista[i] <<", ";
	} 
}
TipoEntero* agregaElementoAlInicio(TipoEntero* pLista, size_t* pTamano, TipoEntero pElemento)
{
	TipoEntero* vListaTemporal = new TipoEntero[*pTamano + 1];
	for (auto i = 0; i < *pTamano; i++)
	{
		vListaTemporal[i + 1] = pLista[i];
	}
	
	*pTamano = *pTamano + 1;
	vListaTemporal[0] = pElemento;
	
	return vListaTemporal;
	
}
TipoEntero* optAgregaInicio(TipoEntero* pLista, size_t* pTamano)
{
	cout << "4. AGREGAR AL INICIO" << endl;
	cout << TipoString(12, '-') << "\n\n";
	TipoEntero vElemento;
	cout << "Ingrese el numero entero: ";
	cin >> vElemento;
	return agregaElementoAlInicio(pLista, pTamano, vElemento);

	
}
TipoEntero* AgregaElementoAlFinal(TipoEntero* pLista, size_t* pTamano, TipoEntero pElemento)
{
	TipoEntero* vListaTemporal = new TipoEntero[*pTamano + 1]; 
	for (auto i = 0; i < *pTamano; i++)
	{  
		vListaTemporal[i] = pLista[i];
	}
	vListaTemporal[*pTamano] = pElemento;
	*pTamano = *pTamano + 1;
	return vListaTemporal;
}
TipoEntero* optAgregarFinal(TipoEntero* pLista, size_t* pTamano)
{
	cout << "2. AGREGAR AL FINAL" << endl;
	cout << TipoString(12, '-') << "\n\n";
	srand(time(nullptr)); 
	for (auto i = 0; i < 1; i++)
	{
		pLista =	AgregaElementoAlFinal(pLista, pTamano, rand() % 200);
	}
	return pLista;
}
TipoEntero* OrdenarMayoraMenor(TipoEntero* pLista, size_t* pTamano)
{
	for (auto i = 0; i < *pTamano; i++)
		for (auto j = 0; j < *pTamano; j++)
		{
			if (pLista[i] > pLista[j])
			{
				TipoEntero temporal;
				temporal = pLista[i];
				pLista[i] = pLista[j];
				pLista[j] = temporal;
			}
		}
	return pLista;	
}

TipoEntero* optOrdenarMayoraMenor(TipoEntero* pLista, size_t* pTamano)
{
	cout << "5. ORDENAR DE MAYOR A MENOR" << endl;
	cout << TipoString(12, '-') << "\n\n";
	pLista = OrdenarMayoraMenor(pLista, pTamano);
	return pLista;
}
TipoEntero* HallarMayor(TipoEntero* pLista, size_t* pTamano)
{
	TipoEntero* mayor = new TipoEntero;
	*mayor = pLista[0];
	for (auto i = 0; i < *pTamano; i++)
	{
		if (*mayor < pLista[i])
		{
			*mayor = pLista[i];
		}
	}
	return mayor;	
}
void optBuscarMayor(TipoEntero* pLista, size_t* pTamano)
{
	cout << "3. BUSCA MAYOR" << endl;
	cout << TipoString(12, '-') << "\n\n";
	cout << "El mayor es: " << *HallarMayor(pLista, pTamano)<<endl;
}
TipoEntero* hallaMenor(TipoEntero* pLista, size_t* pTamano)
{
	TipoEntero* menor = new TipoEntero;
	*menor = pLista[0];
	for (auto i = 0; i < *pTamano; i++)
	{
		if (*menor > pLista[i])
		{
			*menor = pLista[i];
		}
	}
	return menor;	
}
void OptBuscarMenor(TipoEntero* pLista, size_t* pTamano)
{
	cout << "3. BUSCA MENOR" << endl;
	cout << TipoString(12, '-') << "\n\n";
	cout<<"El menor es: "<< *hallaMenor(pLista, pTamano) << endl;;
}