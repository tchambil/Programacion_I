#pragma once

#include "Tipos.h"
class CRobot {
private:
    TipoString    m_Nombre;
    TipoCaracter  m_Color;
    TipoEntero    m_PosX;
    TipoEntero    m_PosY;
public:
    CRobot(TipoString pNombre, TipoCaracter pColor,
        TipoEntero pPosX, TipoEntero pPosY);
    CRobot(TipoString pNombre, TipoCaracter pColor);
    CRobot();
    ~CRobot();
    void setNombre(TipoString pNombre);
    void moverse(TipoEntero pPosX, TipoEntero pPosY);
    void golpear(CRobot pEnemigo);
    TipoString getNombre();
    TipoEntero getPosX();
    TipoEntero getPosY();
    TipoCaracter getColor();
    TipoString getPosicion();

};