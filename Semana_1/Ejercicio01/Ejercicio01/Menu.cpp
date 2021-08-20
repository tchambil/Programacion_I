
#include <iostream>
#include "Tipos.h"
#include "Menu.h"
#include "Funciones.h"
using namespace std;
TipoEntero* gListaGeneral = NULL;
size_t* gTamanoLista = new size_t;
void Limpiar() {
	cout << "\033[2J\033[0;0H";
}
void Esperar() {
	char w;
	do {
		w = input<TipoCaracter>("Presione C y Enter para continuar...");
	} while (toupper(w) != 'C');
}

void ImprimirMenu()
{
	Limpiar();
	cout << "MENU\n";
	cout << TipoString(6, '-') << "\n\n";
	cout << "1. Listar en pantalla los elementos del arreglo\n";
	cout << "2. Generar los datos del arreglo en forma aleatoria\n";
	cout << "3. Buscar el mayor y mostrar su ubicación \n";
	cout << "4. Buscar el menor y mostrar su ubicación \n";
	cout << "5. Ordenar el arreglo en forma descendente y mostrarlo en pantalla\n";
	cout << "6. Salir\n\n";
}

void  SeleccionarOpcion(TipoEntero pOpcion) {
	Limpiar();
	switch (Opciones(pOpcion)) {
	case Opciones::Lista:  // 
		optListarElementos(gListaGeneral, gTamanoLista);
		Esperar();
		break;
	case Opciones::Generar:  // 
		gListaGeneral= optAgregarFinal(gListaGeneral, gTamanoLista);
		Esperar();
		break;
	case Opciones::BuscarMayor: //
		optBuscarMayor(gListaGeneral, gTamanoLista);
		Esperar();
		break;
	case  Opciones::BuscarMenor: //
		OptBuscarMenor(gListaGeneral, gTamanoLista);
		Esperar();
		break;
	case  Opciones::Ordenar: //
		gListaGeneral = optOrdenarMayoraMenor(gListaGeneral, gTamanoLista);
		Esperar();
		break;
	case  Opciones::Salir: // 
		break;
	}
}
void EjecutarMenu(size_t pTamano) {
	TipoEntero vOpcion;
	*gTamanoLista = pTamano;
	gListaGeneral = GenerarLista(pTamano);
	do {
		ImprimirMenu();
		cin >> vOpcion;
		SeleccionarOpcion(vOpcion);
	} while (vOpcion != 6);
	cout << "Fin del programa...\n";
}