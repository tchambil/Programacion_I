#include "Funciones.h"
 



TipoEntero* GenerarLista(size_t& pTamano)
{
	TipoEntero* pLista = nullptr;
	size_t* gTamano = new size_t;
	srand(time(nullptr));
	cout <<"Ingrese la cantidad de alumnos: \n";
	cin>> pTamano;
	pLista = new TipoEntero[pTamano];
	for (size_t i = 0; i < pTamano; i++) {
		*(pLista + i) = rand() % 1000;
	}
	return pLista;
}
void ListarElementos(TipoEntero* pLista, size_t pTamano)
{
	cout << "1. LISTAR NOTAS" << endl;
	cout << TipoString(12, '-') << "\n\n";

	for (auto i = 0; i < pTamano; i++)
	{
		 
		if (i == pTamano - 1)
			cout << pLista[i] << endl;
		else
			cout << pLista[i] << ", ";
	}		
}

TipoEntero* EncontrarMayor(TipoEntero* pLista, size_t pTamano)
{
	TipoEntero* mayor = new TipoEntero;
	*mayor = pLista[0];
	for (auto i = 0; i < pTamano; i++)
	{
		if (*mayor < pLista[i])
		{
			*mayor = pLista[i];
		}
	}
	return mayor;
}
void MostrarMayor(TipoEntero* pLista, size_t pTamano)
{
	cout << "3. MOSTRAR MAYOR" << endl;
	cout << TipoString(12, '-') << "\n\n";
	cout << "El mayor es: " << *EncontrarMayor(pLista, pTamano) << endl;
}
TipoEntero* EncontrarMenor(TipoEntero* pLista, size_t pTamano)
{
	TipoEntero* menor = new TipoEntero;
	*menor = pLista[0];
	for (auto i = 0; i < pTamano; i++)
	{
		if (*menor > pLista[i])
		{
			*menor = pLista[i];
		}
	}
	return menor;
}
void MostrarMenor(TipoEntero* pLista, size_t pTamano)
{
	cout << "4. MOSTRAR MENOR" << endl;
	cout << TipoString(12, '-') << "\n\n";
	cout << "El menor es: " << *EncontrarMenor(pLista,pTamano) << endl;
}
TipoDouble* EncontrarPromedio(TipoEntero* pLista, size_t pTamano)
{
	TipoDouble* promedio = new TipoDouble;
	
	TipoDouble suma = 0;
	for (auto i = 0; i < pTamano; i++)
	{
		suma += pLista[i];
	}
	*promedio = suma/ (pTamano);
	return promedio;
}
void MostrarPromedio(TipoEntero* pLista, size_t pTamano)
{
	cout << "5. MOSTRAR PROMEDIO" << endl;
	cout << TipoString(12, '-') << "\n\n";
	cout << "El promedio es: " << *EncontrarPromedio(pLista,pTamano) << endl;
}

void MostrarPorcentaje(TipoEntero* pLista, size_t pTamano)
{
	cout << "5. MOSTRAR PORCENTAJE" << endl;
	cout << TipoString(12, '-') << "\n\n";
	cout << "//TODO ... " ;
}
void Ordernar(TipoEntero* pLista, size_t pTamano)
{
	for (auto i = 0; i < pTamano; i++)
		for (auto j = 0; j < pTamano; j++)
		{
			if (pLista[i] > pLista[j])
			{
				TipoEntero aux;
				aux = pLista[i];
				pLista[i] = pLista[j];
				pLista[j] = aux;
			}
		} 	
}
