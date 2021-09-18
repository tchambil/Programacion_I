#include "pch.h"
#include "CAnimal.h"
CAnimal::CAnimal()
{
	
}
CAnimal::CAnimal(TipoString pNombre, TipoString pImagen)
{
	this->m_Nombre = pNombre;
	this->m_Imagen = pImagen;
}
CAnimal::~CAnimal()
{
	
}
TipoString CAnimal::getNombre()
{
	return m_Nombre;
	
}
TipoString CAnimal::getImagen()
{
	return m_Imagen;
}