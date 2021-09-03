#pragma once
typedef int entero;
typedef float decimal;
using namespace std;
class CPunto2D
{
private:
	entero m_x;
	entero m_y;
public:
	CPunto2D();
	CPunto2D(entero x, entero y);
	~CPunto2D();
	entero getX();
	void setX(entero x);
	entero getY();
	void setY(entero y);
	decimal distancia(CPunto2D& p);
};
