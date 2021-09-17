#include "pch.h"
#include "CLanzador.h"
CLanzador::CLanzador()
{
	this->m_Arreglo = nullptr;
	this->m_Cantidad = new Entero;
	*m_Cantidad = 0;
}

CLanzador::~CLanzador()
{
}
 
void CLanzador::AgregarPelota(CPelota* pObjeto)
{
	CPelota** temporal = new CPelota * [*m_Cantidad + 1];
	if(temporal !=nullptr)
	{
		for (size_t i = 0; i < *m_Cantidad; i++)
		{
			temporal[i] = m_Arreglo[i];
		}
	}
	temporal[*m_Cantidad] = pObjeto;
	(*m_Cantidad)++;
	if(m_Arreglo!=nullptr)
	{
		delete m_Arreglo;
	}

	m_Arreglo = temporal;

}
CPelota* CLanzador::ObtenerPelota(Entero pIndice)
{
	return m_Arreglo[pIndice];
}
void CLanzador::MostrarPelotas()
{
	for (size_t i = 0; i < *m_Cantidad; i++)
	{
		m_Arreglo[i]->borrar();
		m_Arreglo[i]->mover();
		m_Arreglo[i]->dibujar();
	}
}
Entero CLanzador::ObtenerCantidad()
{
	return *m_Cantidad;
}