#include "CCirculo.h"
CCirculo::CCirculo()
{
	m_X = 0;
	m_Y = 0;
	m_Diametro = 0;
	m_Dx = 0;
	m_Dy = 0;
}

CCirculo::~CCirculo()
{
}
CCirculo::CCirculo(TipoEntero pX, TipoEntero pY, TipoEntero pDiamentro)
{
	m_X = pX;
	m_Y = pY;
	m_Diametro = pDiamentro;
	m_Dx = 5;
	m_Dy = 5;	
}
void CCirculo::borraCirculo(Graphics^ g)
{
	Pen^ pen = gcnew Pen(Color::White);
	SolidBrush^ myBrush = gcnew SolidBrush(Color::White);
	g->FillEllipse(myBrush, m_X, m_Y, m_Diametro, m_Diametro);
	g->DrawEllipse(pen, m_X, m_Y, m_Diametro, m_Diametro);
}
void CCirculo::dibujaCirculo(Graphics^ g)
{
	Pen^ pen = gcnew Pen(Color::Red);
	SolidBrush^ brush = gcnew SolidBrush(Color::Green);
	g->FillEllipse(brush, m_X, m_Y, m_Diametro, m_Diametro);
	g->DrawEllipse(pen, m_X, m_Y, m_Diametro, m_Diametro);	
}
void CCirculo::cambiaPosicion(Graphics^ g)
{
	if (m_X + m_Dx<1 || m_X + m_Dx + m_Diametro>g->VisibleClipBounds.Width)
	{
		m_Dx = m_Dx * -1;
	}
	if (m_Y + m_Dy<1 || m_Y + m_Dy + m_Diametro>g->VisibleClipBounds.Height)
	{
		m_Dy = m_Dy * -1;
	}
	m_X += m_Dx;
	m_Y += m_Dy;
}
void CCirculo::moverCirculo(Graphics^ g)
{
	borraCirculo(g);
	cambiaPosicion(g);
	dibujaCirculo(g); 
}