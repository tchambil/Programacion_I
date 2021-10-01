#include "pch.h"
#include "CPelota.h"
using namespace System;
CPelota::CPelota()
{
	this->m_X =2;
	this->m_Y = 20;
	this->m_DX = 1;
	this->m_DY = 1;
	this->m_Forma = 'O';
}
CPelota::~CPelota(){

}
void CPelota::borrar()
{
	Console::SetCursorPosition(m_X, m_Y);
	cout << " ";
}
void CPelota::mover()
{
	if (m_X > 78 || m_X < 1)m_DX *= -1;
	if (m_Y > 38 || m_Y < 1)m_DY *= -1;
	m_X += m_DX;
	m_Y += m_DY;
}
void CPelota::dibujar()
{
	Console::SetCursorPosition(m_X, m_Y);
	cout << m_Forma;
}