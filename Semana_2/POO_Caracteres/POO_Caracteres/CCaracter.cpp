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

}
void CCaracter::desplazar()
{
	if (m_PosX + m_DesplazaX > 78 || m_PosX < 1)
		m_DesplazaX = m_DesplazaX * -1;
	m_PosX = m_PosX + m_DesplazaX;
	
}
void CCaracter::dibujar()
{
	Console::SetCursorPosition(this->m_PosX, this->m_PosY);
	cout << (char)2;
}