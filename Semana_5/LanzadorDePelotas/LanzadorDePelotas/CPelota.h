#pragma once
#include "Tipos.h"

class CPelota
{
	private:
		EnteroPequeno m_X;
		EnteroPequeno m_Y;
		EnteroPequeno m_DX;
		EnteroPequeno m_DY;
		Caracter m_Forma;
		String m_Color;

	public:
		CPelota(void);
		~CPelota();
		void borrar();
		void mover();
		void dibujar();

};

