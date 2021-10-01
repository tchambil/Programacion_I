#include "pch.h"
#include "CCaracter.h"
#include <ctime>
#include <cstdlib>
using namespace System;

int main()
{
    srand(time(nullptr));
    Console::SetWindowSize(80, 40);
    Console::CursorVisible = false;
    CCaracter* prtObjeto1, * prtObjeto2;
    prtObjeto1 = new CCaracter(30, 15);
    prtObjeto2 = new CCaracter();
    while (true)
    {
        prtObjeto1->borrar();
        prtObjeto1->desplazar();
        prtObjeto1->dibujar();

      /*  prtObjeto2->borrar();
        prtObjeto2->desplazar();
        prtObjeto2->dibujar();*/


        _sleep(100);
    }
    delete prtObjeto1;
    delete prtObjeto2;

    return 0;
}
