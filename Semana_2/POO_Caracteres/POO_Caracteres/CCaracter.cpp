#include "pch.h"
#include "CCaracter.h"

CCaracter::CCaracter()
{
	this->m_PosX = rand() % 40;
	this->m_PosY = rand() % 20;
	this->m_DesplazaX = 1;
}

CCaracter::CCaracter(TipoPosicion _Px, TipoPosicion _Py)
{
	this->m_PosX = _Px;
	this->m_PosY = _Py;
	this->m_DesplazaX = 1;
	
}
CCaracter::~CCaracter()
{
}
void CCaracter::borrar()
{
	Console::SetCursorPosition(this->m_PosX, this->m_PosY);
	cout << " ";
	Console::SetCursorPosition(this->m_PosX, this->m_PosY+1);
	cout << " ";
	Console::SetCursorPosition(this->m_PosX, this->m_PosY + 2);
	cout << " ";
	Console::SetCursorPosition(this->m_PosX, this->m_PosY + 3);
	cout << " ";
}
void CCaracter::desplazar()
{
	if (m_PosX + m_DesplazaX > 78 || m_PosX < 1)
		m_DesplazaX = m_DesplazaX * -1;
	m_PosX = m_PosX + m_DesplazaX;
	cout << m_PosX<<"," << m_PosY;
	
}
void CCaracter::dibujar()
{
	Console::SetCursorPosition(this->m_PosX, this->m_PosY);
	cout << " ___\n";
	Console::SetCursorPosition(this->m_PosX, this->m_PosY+1);
	cout << "/o o'\'\n";
	Console::SetCursorPosition(this->m_PosX, this->m_PosY+2);
	cout << "|   |\n";
	Console::SetCursorPosition(this->m_PosX, this->m_PosY+3);
	cout << "|,,,|\n";
	Console::SetCursorPosition(this->m_PosX, this->m_PosY+4);
	//cout << (char)2;


	

}