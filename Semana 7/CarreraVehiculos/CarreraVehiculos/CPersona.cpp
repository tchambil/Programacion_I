#include "pch.h" 
#include "CPersona.h"
using namespace System;
CPersona::CPersona(TipoEntero pFilas, TipoEntero pColumnas)
{
	m_Dx = 1;
	m_Filas = pFilas;
	m_Columnas = pColumnas;
	m_Velocidad = 0.1 + (rand() % 10) / 10.0;
	inicializarMatrizPersona(pFilas, pColumnas);
}

  CPersona::~CPersona()
{
	liberarMemoriaMatriz();
}
void CPersona::AsignarCoordenadasXY(TipoEntero pX, TipoEntero pY)
{
	m_X = pX;
	m_Y = pY;

	//srand(time(NULL));
	//m_X = 2 + rand() % 70; //En rango [2,71]
	//m_Y = 2 + rand() % 20;//En rango [2,21]
}
void CPersona::MostrarFigura()
{
	TipoEntero auxY = m_Y;
	for (size_t i = 0; i < m_Filas; i++)
	{
		Console::SetCursorPosition(m_X, auxY);
		for (size_t j = 0; j < m_Columnas; j++)
		{
			if (m_Figura[i][j] == ' ')
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
void CPersona::MoverFigura()
{
	/*if (m_X + m_Dx<0 || m_X + m_Dx>79)
	{
		m_Dx = m_Dx * -1;
	}
	m_X += m_Dx;
	*/
	m_X += m_Velocidad;
}
void CPersona::MoverFiguraUp(TipoDecimal pY)
{
	m_Y = pY;
}
void CPersona::MoverFiguraDown(TipoDecimal pY)
{
	m_Y = pY;
}

void CPersona::MoverFiguraLeft(TipoDecimal pX)
{ 
	m_X = pX;
}
void CPersona::MoverFiguraRight(TipoDecimal pX)
{
	m_X = pX;
}
void CPersona::BorrarFigura()
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
void CPersona::SetFigura(TipoCaracter** pFigura)
{
	m_Figura = pFigura;

}
void CPersona::liberarMemoriaMatriz()
{
	for (size_t i = 0; i < m_Filas; i++)
	{
		delete[] m_Figura[i];
	}
	delete[] m_Figura;
}
TipoEntero CPersona::getX()
{
	return m_X;
}
TipoEntero CPersona::getY()
{
	return m_Y;
}
void CPersona::inicializarMatrizPersona(TipoEntero pFilas, TipoEntero pColumnas)
{
	TipoCaracter matrizEstatica[4][3] = {
		{' ','o',' '},
		{'/','|','\\'},
		{' ','|',' '},
		{'/',' ','\\'},
	};
	TipoCaracter** figura;
	figura = new TipoCaracter * [pFilas];
	for (size_t i = 0; i < pFilas; i++)
	{
		figura[i] = new TipoCaracter[pColumnas];
	}
	for (size_t i = 0; i < pFilas; i++)
	{
		for (size_t j = 0; j < pColumnas; j++)
		{
			figura[i][j] = matrizEstatica[i][j];
		}
	}
	SetFigura(figura);
}
