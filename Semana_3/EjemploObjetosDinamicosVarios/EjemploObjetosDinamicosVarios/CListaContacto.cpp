#include "pch.h"
#include "CListaContacto.h"

CListadoContacto::CListadoContacto(void)
{
	m_Contactos = nullptr;
	m_Tamano = 0;
}
CListadoContacto::~CListadoContacto()
{
	
}
void CListadoContacto::AgregarContacto(CContacto* ptrContacto)
{
	CContacto** temporal = new CContacto * [m_Tamano + 1];
	for (auto i = 0; i < m_Tamano; i++)
	{
		temporal[i] = m_Contactos[i];
	}
	temporal[m_Tamano] = ptrContacto;
	m_Tamano ++;

	if (m_Contactos != nullptr)
		delete m_Contactos;

	m_Contactos = temporal;

}
CContacto* CListadoContacto::ObtenerContacto(entero pPosition)
{
	return m_Contactos[pPosition];
}
void CListadoContacto::MostrarContactos()
{
	if(m_Contactos!=nullptr)
	{
		for (size_t i = 0; i < m_Tamano; i++)
		{
			cout << m_Contactos[i]->getNombre() << "\t";
			cout<< m_Contactos[i]->getNumero()<< "\t";
			cout<< m_Contactos[i]->getCorreo()<< "\n";
		}
	}
	else
	{
		cout << "\n NO TIENES AMIGOS - NO HAY CONTACTOS";
	}
	
}
entero CListadoContacto::ObtenerTamano()
{
	return this->m_Tamano;
}