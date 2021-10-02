#include "pch.h" 
#include "CCarrera.h"
#include "conio.h"
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

using namespace System;
CCarrera::CCarrera()
{
	srand(time(NULL));
	ptrMoto = make_shared<CMoto>(5, 7);
	ptrCoche = make_shared<CCoche>(4, 13);
	ptrPersona =make_shared<CPersona>(4, 3);
	ptrMoto->AsignarCoordenadasXY(2,2); 
	ptrCoche->AsignarCoordenadasXY(2,10);
	ptrPersona->AsignarCoordenadasXY(30, 30);
	m_Meta = 65;
}

CCarrera::~CCarrera()
{

}
void CCarrera::iniciarCarrera()
{
	bool hay_ganador = false;
	//TipoEntero ranking[2] = { 0 };
	TipoEntero teclado = 0;
	TipoDecimal posY = 1;
	TipoDecimal posX = 1;
	ptrPersona->BorrarFigura();
	ptrPersona->MoverFigura();
	ptrPersona->MostrarFigura();
	posX = ptrPersona->getX();
	posY = ptrPersona->getY();
	while (true)
	{
		ptrMoto->BorrarFigura();
		ptrMoto->MoverFigura();
		ptrMoto->MostrarFigura();

		ptrCoche->BorrarFigura();
		ptrCoche->MoverFigura();
		ptrCoche->MostrarFigura(); 
		if (kbhit())
		{
			
			switch ((teclado = getch())) {
			case KEY_UP:
				posY -= 1; 
				break;
			case KEY_DOWN:
				posY += 1; 
				break;
			case KEY_LEFT:
				posX -= 1; 
				break;
			case KEY_RIGHT:
				posX += 1; 
				break;
			default: 
				break;
			}
			ptrPersona->BorrarFigura();
			ptrPersona->MoverFiguraUp(posY);
			ptrPersona->MoverFiguraDown(posY);
			ptrPersona->MoverFiguraLeft(posX);
			ptrPersona->MoverFiguraRight(posX);
			ptrPersona->MostrarFigura();
		} 

		if(ptrMoto->getX()>m_Meta)
		{
			Console::SetCursorPosition(30, 35); cout << "GANA CMOTO";
			hay_ganador = true;
			_getch();
		}
		if (ptrCoche->getX() > m_Meta)
		{
			Console::SetCursorPosition(30, 35); cout << "GANA CCOCHE";
			hay_ganador = true;
			_getch();
		}
		_sleep(100); 
	}
}