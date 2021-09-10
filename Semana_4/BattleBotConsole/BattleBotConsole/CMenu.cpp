#include "pch.h"
#include "CMenu.h"
#include <iostream>
#include <string>
#include <cstdio>
#include "conio.h"
using namespace System;
using namespace std;

enum class Opciones { Agregar = 1, Remover, Mostrar };
TipoEntero CMenu::imprimirMenu() {
    TipoEntero opcion;
    do
    {
    cout << "MENU\n";
    cout << string(4, '-') << "\n\n";
    cout << "1. Agregar un nuevo objeto\n";
    cout << "2. Remover objeto\n";
    cout << "3. Dibujar Mapa\n\n";
    cout << "0. Para Salir\n\n";
    cout << endl << "  Elija una opcion: ";
    cin >> opcion;
    } while (opcion < 1 || opcion>6);

    return opcion;
}

void CMenu::agregarObjeto() {
    auto    nombre = input<TipoString>("Ingrese Nombre : ");
    auto color = input<TipoCaracter>("Ingrese color (Un caracter): ");

    auto x = input<TipoEntero>("Ingrese posicion X : ");


    while (x < 0 || x >= m_BattleBox.getAncho()) {
        cout << "Posicion X Incorrecta, los limites son: 0, "
            << m_BattleBox.getAncho() - 1 << "\n";
        x = input<TipoEntero>("Ingrese posicion X : ");
    }

    TipoEntero y = input<TipoEntero>("Ingrese posicion Y : ");
    while (y < 0 || y >= m_BattleBox.getAncho()) {
        cout << "Posicion Y Incorrecta, los limites son: 0, "
            << m_BattleBox.getAltura() - 1 << "\n";
        y = input<TipoEntero>("Ingrese posicion Y : ");
    }

    m_BattleBox.adicionarRobot(new CRobot(nombre, color, x, y));
}

void CMenu::removerObjeto() {
    auto nombre = input<TipoString>("Ingrese Nombre: ");

    CRobot* obj = m_BattleBox.removerRobot(nombre);
    if (obj == nullptr) {
        cout << "Objeto No existe\n";
    }
    else {
        delete obj;
        cout << "Objeto: " << nombre << " ha sido removido\n";
    } 
}

void CMenu::dibujarMapa() { 
    m_BattleBox.actualizarBattleBox();
    m_BattleBox.dibujarBattleBox(cout);
    cout << '\n';
    m_BattleBox.imprimirRobots(cout);
    cout << '\n'; 
}
void CMenu::ejecutar() {
    while (true)
    {
        Console::Clear();
        TipoEntero opcion = CMenu::imprimirMenu();
        switch (Opciones(opcion)) {
        case Opciones::Agregar:  // Agregar Objeto
            agregarObjeto();
            break;
        case Opciones::Remover:  // Remover Objeto
            removerObjeto();
            break;
        case  Opciones::Mostrar: // Dibujando Tierra
            dibujarMapa();
            break;
        }
        cout << "\n\nPresione una tecla para continuar...";

        _getch();
    }
}