#include "pch.h"
#include "Tipos.h"
#include "CLanzador.h"
#include "conio.h"
using namespace System;

Entero main()
{   //tamano de la consola
    Console::SetWindowSize(80, 40);
    Console::CursorVisible = false;
    //dibujar al lanzador
    Console::ForegroundColor = ConsoleColor::Blue;
    Console::SetCursorPosition(0, 20); cout << "#>";
    Console::ForegroundColor = ConsoleColor::White;

    CLanzador* ptrLanzador;
    CPelota* ptrPelota;
    ptrLanzador = new CLanzador();

	while (true)
    {
        if(_kbhit()) // detecta si se ha pulsado una tecla
        {

        	Caracter tecla =  getch(); //captura la tecla pulsada
            if(tecla =='P')
            {
                ptrPelota = new CPelota();//Crea nuevo objeto pelota
                ptrLanzador->AgregarPelota(ptrPelota);
            }
        }
        if(ptrLanzador->ObtenerCantidad()>0)
        {
            ptrLanzador->MostrarPelotas();
        }
        _sleep(100);        
    }
    system("pause>0");

    return 0;
}
