// EjercicioIntercambio.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Escriba un programa que permita leer dos datos de tipo entero, las almacene en dos variables estáticas y luego el programa realizará lo siguiente :
// Imprimir los números leídos
// A través de una función llamada Intercambiar, intercambie el valor de las variables.Envíe a la función las direcciones de las variables.
// Imprimir nuevamente el valor de las variables.

//

#include "UFunciones.h"

int main()
{
    TipoEntero num1, num2;
    cout << "Ingrese num1 :";
    cin >> num1;
    cout << "Ingrese num2 :";
    cin >> num2;
    Intercambiar(&num1, &num2);
    cout << "Valor intercambiados " << endl;
    cout << "Valor num1 : " << num1 << endl;
    cout << "Valor num2 : " << num2;
}

 