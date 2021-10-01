#include "pch.h" 
#include "CVehiculo.h"
using namespace System;
CVehiculo::CVehiculo(TipoEntero pFilas, TipoEntero pColumnas)
{
	m_Dx = 1;
	m_Filas = pFilas;
	m_Columnas = pColumnas;
}

CVehiculo::~CVehiculo()
{
	liberarMemoriaMatriz();
}
void CVehiculo::AsignarCoordenadasXY()
{
	srand(time(NULL));
	m_X = 2 + rand() % 70; //En rango [2,71]
	m_Y = 2 + rand() % 20;//En rango [2,21]
}
void CVehiculo::MostrarFigura()
{
	TipoEntero auxY = m_Y;
	for (size_t i = 0; i < m_Filas; i++)
	{
		Console::SetCursorPosition(m_X, auxY);
		for (size_t j = 0; j < m_Columnas; j++)
		{
			if(m_Figura[i][j]==' ')
			{
				cout << " ";
			}
			else
			{
				cout << m_Figura[i][j];
			}
		}
		auxY++;
	}
}
void CVehiculo::MoverFigura()
{
	if(m_X+m_Dx<0|| m_X+m_Dx>79)
	{
		m_Dx = m_Dx * -1;
	}
	m_X += m_Dx;
}
void CVehiculo::BorrarFigura()
{
	TipoEntero auxY = m_Y;
	for (size_t i = 0; i < m_Filas; i++)
	{
		Console::SetCursorPosition(m_X, auxY);
		for (size_t j = 0; j < m_Columnas; j++)
		{ 
				cout << " "; 
		}
		auxY++;
	}
}
void CVehiculo::SetFigura(TipoCaracter** pFigura)
{
	m_Figura = pFigura;
	
}
void CVehiculo::liberarMemoriaMatriz()
{
	for (size_t i = 0; i < m_Filas; i++)
	{
		delete[] m_Figura[i];
	}
	delete[] m_Figura;
}