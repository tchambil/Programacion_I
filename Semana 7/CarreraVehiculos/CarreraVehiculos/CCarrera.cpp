#include "pch.h" 
#include "CCarrera.h"
#include "conio.h"
using namespace System;
CCarrera::CCarrera()
{
	srand(time(NULL));
	ptrMoto = make_shared<CMoto>(5, 7);
	ptrCoche = make_shared<CCoche>(4, 13);
	ptrMoto->AsignarCoordenadasXY(2,2); 
	ptrCoche->AsignarCoordenadasXY(2,10);
	m_Meta = 65;
}

CCarrera::~CCarrera()
{

}
void CCarrera::iniciarCarrera()
{
	bool hay_ganador = false;
	TipoEntero ranking[2] = { 0 };
	while (true)
	{
		ptrMoto->BorrarFigura();
		ptrMoto->MoverFigura();
		ptrMoto->MostrarFigura();

		ptrCoche->BorrarFigura();
		ptrCoche->MoverFigura();
		ptrCoche->MostrarFigura();

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