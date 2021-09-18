#pragma once
#include "Tipos.h"
class CAnimal
{
private:
	TipoString m_Nombre;
	TipoString m_Imagen;
public:
	CAnimal();
	CAnimal(TipoString pNombre, TipoString pImagen);
	~CAnimal();
	TipoString getNombre();
	TipoString getImagen();
};

