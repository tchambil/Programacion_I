#include "pch.h"
#include "CCarrera.h"
using namespace System;

int main()
{
    Console::SetWindowSize(80, 40);
    Console::CursorVisible = false;
    //variable 
    shared_ptr<CCarrera> objetoCarrera = make_shared<CCarrera>();   
    objetoCarrera->iniciarCarrera();

    system("pause>0");

    return 0;
}
