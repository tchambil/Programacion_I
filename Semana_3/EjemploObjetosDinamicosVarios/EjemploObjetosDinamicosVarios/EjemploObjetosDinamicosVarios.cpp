#include "pch.h"
#include "Funciones.h"
#include "CListaContacto.h"
#include "conio.h"
using namespace System;

int main()
{
	CListadoContacto* ptrListado;
	//instancia el ptrListado;
	ptrListado = new CListadoContacto();
	CContacto* ptrContacto;

	string NombreContacto;
	entero NumeroContacto;
	string CorreoContacto;

	while (true)
	{
		Console::Clear();
		entero opcion = Menu();
		if(opcion ==1)
		{
			ptrListado->MostrarContactos();
		}
		if(opcion ==2)
		{ //ingreso de datos
			cout << "\n Ingrese Nombre: "; cin >> NombreContacto;
			cout << "\n Ingrese Numero: "; cin >> NumeroContacto;
			cout << "\n Ingrese Correo: "; cin >> CorreoContacto;

			ptrContacto = new CContacto();
			ptrContacto->SetNombre(NombreContacto);
			ptrContacto->SetNumero(NumeroContacto);
			ptrContacto->SetCorreo(CorreoContacto);

			ptrListado->AgregarContacto(ptrContacto);
		}
		cout << "\n\nPresione una tecla para continuar...";

		_getch();
	}

}
