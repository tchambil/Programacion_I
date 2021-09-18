#pragma once
#include <vector>
#include "CAnimal.h"
class CListaAnimal
{
private:
	vector<CAnimal*> m_listaAnimales;
public:
	CListaAnimal();
	~CListaAnimal();
	void agregarAnimales();
	CAnimal* getAnimal(Entero pIndex);
};

