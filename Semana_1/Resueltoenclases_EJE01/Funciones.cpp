#include "Tipos.h"
#include "Funciones.h"
TipoEntero* GenerarLista(size_t pTamano)
{
	srand(time(nullptr));
	cout << "estamos aqui" ;
	TipoEntero* ptrLista = new TipoEntero[pTamano];
	for (size_t i = 0; i<pTamano;i++)
	{
		*(ptrLista + i) = rand() % 1000;
	}
	return ptrLista;	
}
void optListarElementos(TipoEntero* pLista, size_t* pTamano)
{
	cout << "1. LISTAR ELEMENTOS" << endl;
	cout << TipoString(12, '-') << "\n\n";
	for (auto i =0;i<*pTamano;i++)
	{
		if (i == *pTamano - 1)
			cout << pLista[i] << endl;
		else
			cout << pLista[i] << ", ";
	}
}

TipoEntero* HallarMayor(TipoEntero* pLista, size_t* pTamano)
{
	TipoEntero* mayor = new TipoEntero;
	*mayor = pLista[0];
	for(auto i = 0;i<*pTamano;i++)
	{
		if(*mayor<pLista[i])
		{
			*mayor = pLista[i];
		}
	}
	return mayor;
}
void optBuscarMayor(TipoEntero* pLista, size_t* pTamano)
{
	cout << "3. BUSCANDO MAYOR" << endl;
	cout << TipoString(12, '-') << "\n\n";
	cout << "El mayor es: " << *HallarMayor(pLista, pTamano) << endl;;
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
	cout << "4. BUSCANDO MENOR" << endl;
	cout << TipoString(12, '-') << "\n\n";
	cout << "El menor es: " << *hallaMenor(pLista, pTamano) << endl;
}
TipoEntero* OrdenarMayoraMenor(TipoEntero* pLista, size_t* pTamano)
{
	for (auto i = 0;i<*pTamano;i++)
	{
		for(auto j = 0;j<*pTamano;j++)
		{
			if(pLista[i]>pLista[j])
			{
				TipoEntero aux;
				aux = pLista[i];
				pLista[i] = pLista[j];
				pLista[j] = aux;				
			}			
		}
	}
	return pLista;
}
void optOrdenarMayoraMenor(TipoEntero* pLista, size_t* pTamano)
{
	cout << "5. ORDENANDO DE MAYOR A MENOR" << endl;
	cout << TipoString(12, '-') << "\n\n";
	auto listaOrdenada = OrdenarMayoraMenor(pLista, pTamano);
	optListarElementos(listaOrdenada, pTamano);

}