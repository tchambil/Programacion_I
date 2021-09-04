#include "pch.h"
#include "CContacto.h"
CContacto::CContacto(void)
{
	this->m_Nombre = "Nombre de prueba";
	this->m_Numero = 99999999;
	this->m_Correo = "prueba@gmail.com";
	
}
CContacto::CContacto(string _nombre, entero _numero, string _correo)
{
	this->m_Nombre = _nombre;
	this->m_Numero = _numero;
	this->m_Correo = _correo;	
}
CContacto::~CContacto()
{
	
}
void CContacto::SetNombre(string _nombre)
{
	this->m_Nombre = _nombre;
}
void CContacto::SetNumero(entero _numero)
{
	this->m_Numero = _numero;
}
void CContacto::SetCorreo(string _correo)
{
	this->m_Correo = _correo;
}
string CContacto::getNombre()
{
	return m_Nombre;
}
entero CContacto::getNumero()
{
	return m_Numero;
}
string CContacto::getCorreo()
{
	return this->m_Correo;
	
}