// Multiplos7_5.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
/*
Realice un programa que permita leer como dato un número que representa la cantidad de elementos que tendrá un array dinámico.
Luego realice lo siguiente:
Crear el array, llenarlo con números aleatorios entre 0 y 999. 
Imprimir el array
Generar a partir de ese array dos nuevos array dinámicos, el primero con los múltiplos de 5 y el segundo con los múltiplos de 7 que tenga el primer array.

 */ 

#include <iostream>

#include "Ufunciones.h"

int main()
{
    size_t tamano, tamano5 = 0, tamano7 = 0;
    srand(time(nullptr));

    TipoEntero* ptrGeneral, * ptrMultiplo5, * ptrMultiplo7;
    size_t Indice5, Indice7;

    cout << "Ingrese tamaño del ptrGeneral ";
    cin >> tamano;
    ptrGeneral = new int[tamano];

    for (size_t i = 0; i < tamano; i++) {
        *(ptrGeneral + i) = rand() % 1000;
        if (*(ptrGeneral + i) % 5 == 0)
            tamano5++;
        if (*(ptrGeneral + i) % 7 == 0)
            tamano7++;
    }
    cout << "Valores de multiplos General" << endl;
    Imprimir(ptrGeneral, tamano);
    ptrMultiplo5 = new TipoEntero[tamano5];
    ptrMultiplo7 = new TipoEntero[tamano7];
    Indice5 = 0;
    Indice7 = 0;

    for (size_t i = 0; i < tamano; i++) {
        if (*(ptrGeneral + i) % 5 == 0) {
            *(ptrMultiplo5 + Indice5) = *(ptrGeneral + i);
            Indice5++;
        }
        if (*(ptrGeneral + i) % 7 == 0) {
            *(ptrMultiplo7 + Indice7) = *(ptrGeneral + i);
            Indice7++;
        }
    }
    cout << "\nValores de multiplos de 5" << endl;
    Imprimir(ptrMultiplo5, tamano5);

    cout << "\nValores de multiplos de 7" << endl;
    Imprimir(ptrMultiplo7, tamano7);
}

 