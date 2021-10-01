#include "pch.h" 
#include "Tipos.h"
#include "CMoto.h"
#include "conio.h"
#include "time.h"
#include "windows.h"
#include <memory> 
using namespace System;

int main()
{
    Console::CursorVisible = false;
    TipoCaracter option;
    do
    {
        cout << "\n\n Seleccione un vehiculo\n\n";
        cout << "[M] Moto\n";
        do
        {
            cout << "\n\nSeleccione una opcion: ";
            cin >> option;
        } while ((option != 'M'));
        if(option !='S')
        {
            switch (option)
            {
            case 'M':
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
        }
        else
        {
            exit(0);
        }  
    } while (option != 'S');
    _getch();
    return 0;
}
