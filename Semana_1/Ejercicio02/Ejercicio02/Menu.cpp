#include "Menu.h"

#include "Funciones.h"
TipoEntero* gListaGeneral = nullptr;
size_t gTamanoLista = 0;

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
	cout << "1. Generar las notas\n";
	cout << "2. Listar en pantalla las notas\n";
	cout << "3. Mostrar la mayor nota \n";
	cout << "4. Mostrar la menor nota \n";
	cout << "5. Mostrar la nota promedio\n";
	cout << "6. Mostrar el porcentaje de aprobados y desaprobados\n";
	cout << "7. Ordenar el arreglo en forma descendente\n";
	cout << "8. Salir\n\n";
}  
void  SeleccionarOpcion(TipoEntero pOpcion) {
	Limpiar();
	switch (Opciones(pOpcion)) {
	case Opciones::Lista:  //  
		ListarElementos(gListaGeneral, gTamanoLista);	
		Esperar();
		break;
	case Opciones::Generar:  //
		gListaGeneral= GenerarLista(gTamanoLista); 
		Esperar();
		break;
	case Opciones::MostrarMayor: // 
		MostrarMayor(gListaGeneral, gTamanoLista);
		Esperar();
		break;
	case  Opciones::MostrarMenor: // 
		MostrarMenor(gListaGeneral, gTamanoLista);
		Esperar();
		break;
	case  Opciones::MostrarPromedio: //
		MostrarPromedio(gListaGeneral, gTamanoLista);
	 	Esperar();
		break;
	case  Opciones::MostrarPorcentaje: //
		MostrarPorcentaje(gListaGeneral, gTamanoLista);
		Esperar();
		break;
	case  Opciones::Ordenar: //
		Ordernar(gListaGeneral, gTamanoLista);
		Esperar();
		break;
	case  Opciones::Salir: // 
		break;
	}
}
void EjecutarMenu() {
	TipoEntero vOpcion; 
	do {
		ImprimirMenu();
		cin >> vOpcion;
		SeleccionarOpcion(vOpcion);
	} while (vOpcion != 8);
	cout << "Fin del programa...\n";
}