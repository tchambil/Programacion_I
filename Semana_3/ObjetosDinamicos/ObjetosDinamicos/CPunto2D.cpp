#include "CPunto2D.h"

#include <iostream> 

CPunto2D::CPunto2D()
{
	cout << "Objeto Construido" << endl;
}
CPunto2D::CPunto2D(entero x, entero y)
{
	this->m_x = x;
	this->m_y = y;
	cout << "Objeto Construido" << endl;
}

CPunto2D::~CPunto2D()
{
	cout << "Objeto destruido" << endl;
}
entero CPunto2D::getX()
{
	return m_x;
}
void CPunto2D::setX(entero x)
{
	m_x = x;
}
entero CPunto2D::getY()
{
	return m_y;
}
void CPunto2D::setY(entero y)
{
	m_y = y;
	
}
decimal CPunto2D::distancia(CPunto2D& p)
{
	decimal dist = 0;
	//TODO
	//...
	return  dist;
}
