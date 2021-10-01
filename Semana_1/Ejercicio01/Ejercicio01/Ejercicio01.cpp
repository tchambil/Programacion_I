// Ejercicio01.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Elaborar un programa en entorno consola que permita almacenar en un arreglo hasta 100 valores enteros. Luego realice lo siguiente:
//- 	Generar los datos del arreglo en forma aleatoria
//- 	Listar en pantalla los elementos del arreglo
//- 	Buscar el mayor y mostrar su ubicación
//- 	Buscar el menor y mostrar su ubicación
//- 	Ordenar el arreglo en forma descendente y mostrarlo en pantalla
//- En la solución considere un menú de opciones para cada funcionalidad y utilice funciones, punteros y arreglos dinámicos.
// 
#include "Funciones.h"
#include "Menu.h" 
using namespace std;

#include<iostream>
using namespace std;

double* duevuelveDireccion() {
	double edad = 100;
	return &edad;
}

void main()
{
	double* recibed;
	recibed = duevuelveDireccion();
	cout << "Direccion :" << &recibed << endl;
	cout << "Valor :" << *recibed << endl;

	//system("pause>>NULL");
}
/*int main()
{
	//size_t tamano = 10;  
	//EjecutarMenu(tamano);
}*/