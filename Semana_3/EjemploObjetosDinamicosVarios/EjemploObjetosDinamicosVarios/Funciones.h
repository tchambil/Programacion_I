#pragma once
#ifndef Funciones_H
#define Funciones_H
#include "iostream"
using namespace std;
#include "Tipos.h"
entero Menu()
{
	entero opcion;
	do
	{
		cout << "MENU" << endl;
		cout << endl << "1- MOSTRAR CONTACTOS";
		cout << endl << "2- AGREGAR CONTACTO";
		cout << endl << "3- ELIMINAR CONTACTO";
		cout << endl << "4- BUSCAR CONTACTO";
		cout << endl << "5- EDITAR CONTACTO";
		cout << endl << "3- SALIR";

		cout << endl << "  Elija una opcion: ";
		cin >> opcion;
	} while (opcion < 1 || opcion>6);

	return opcion;
}

#endif 
