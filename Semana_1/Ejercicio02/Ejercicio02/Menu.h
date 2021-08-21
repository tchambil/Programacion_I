#include "Tipos.h"
using namespace std;
template <typename T>
T input(TipoString label) {
	T value;
	cout << label;
	cin >> value;
	cin.clear();
	//cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	return value;
}
enum class Opciones { Generar= 1, Lista , MostrarMayor, MostrarMenor, MostrarPromedio,MostrarPorcentaje,Ordenar, Salir };
void Limpiar();
void Esperar();
void ImprimirMenu();
void SeleccionarOpcion(TipoEntero pOpcion);
void EjecutarMenu();