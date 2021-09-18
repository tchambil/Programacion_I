#include "pch.h"
#include "CListaAnimal.h"
CListaAnimal::CListaAnimal()
{
	
}
CListaAnimal::~CListaAnimal()
{
	
}
void CListaAnimal::agregarAnimales()
{
	CAnimal* prtAnimal1 = new CAnimal("Perro", "perro.png");
	CAnimal* prtAnimal2 = new CAnimal("BullDog", "Bulldog.png");
	CAnimal* prtAnimal3 = new CAnimal("Osopolar", "osopolar.png");
	CAnimal* prtAnimal4 = new CAnimal("Aguila", "aguila.png");

	m_listaAnimales.push_back(prtAnimal1);
	m_listaAnimales.push_back(prtAnimal2);
	m_listaAnimales.push_back(prtAnimal3);
	m_listaAnimales.push_back(prtAnimal4);
}
CAnimal* CListaAnimal::getAnimal(Entero pIndex)
{
	return m_listaAnimales[pIndex];
}