#include "pch.h" 
#include "Tipos.h"
#include "CMoto.h"
#include "conio.h"
#include "time.h"
#include "windows.h"
#include <memory> 
#include "CCoche.h"
#include "CAvion.h"
using namespace System;

int main()
{
    Console::CursorVisible = false;
    TipoCaracter option;
    do
    {
        cout << "\n\n Seleccione un vehiculo\n\n";
        cout << "[M] Moto\n";
        cout << "[C] Coche\n";
        cout << "[A] Avion\n";
        do
        {
            cout << "\n\nSeleccione una opcion: ";
            cin >> option;
        } while ((option != 'M')&& (option != 'C') && (option != 'A'));
        if (option != 'S')
        {
            switch (option)
            {
            case 'M':
	            {
                shared_ptr<CMoto> ptrMoto = make_shared<CMoto>(5, 7);
                ptrMoto->AsignarCoordenadasXY();
                Console::Clear();
                while (!_kbhit())
                {
                    ptrMoto->BorrarFigura();
                    ptrMoto->MoverFigura();
                    ptrMoto->MostrarFigura();
                    Sleep(50);
                }
                break;
	            }
               
            case 'C':
	            {
                shared_ptr<CCoche> ptrCoche = make_shared<CCoche>(4, 13);
                ptrCoche->AsignarCoordenadasXY();
                Console::Clear();
                while (!_kbhit())
                {
                    ptrCoche->BorrarFigura();
                    ptrCoche->MoverFigura();
                    ptrCoche->MostrarFigura();
                    Sleep(50);
                }
                break;
	            }
            case 'A':
	            {
                shared_ptr<CAvion> ptrAvion = make_shared<CAvion>(5, 19);
                ptrAvion->AsignarCoordenadasXY();
                Console::Clear();
                while (!_kbhit())
                {
                    ptrAvion->BorrarFigura();
                    ptrAvion->MoverFigura();
                    ptrAvion->MostrarFigura();
                    Sleep(50);
                }
                break;
	            }
            }
        }
        else
        {
            exit(0);
        }  
    } while (option != 'S');
    _getch();
    return 0;
}
