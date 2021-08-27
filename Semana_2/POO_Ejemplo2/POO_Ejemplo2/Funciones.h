#pragma once
#include <iostream> 
#include "CCirculo.h" 
#include "CRectangulo.h"
using namespace std;
/*
void imprimirDatos(CRectangulo& R)
{
    cout << "El area del rectangulo es "
        << R.area() << "\n";
    cout << "El perimetro del rectangulo es "
        << R.perimetro()<< "\n";
}

void imprimirDatos(CCirculo& C)
{
    cout << "El area del circulo es "
        << C.area() << "\n";
    cout << "El perimetro circulo es "
        << C.perimetro()<< "\n";
}
*/
template <typename T>
void imprimirGeneral(T& R)
{
    cout << "El area de la figura es "
        << R.area() << "\n";
    cout << "El perimetro de la figura es "
        << R.perimetro();
	
}