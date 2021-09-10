#include "pch.h"
#include "CRobot.h"
CRobot::CRobot() {}

CRobot::CRobot(TipoString pNombre, TipoCaracter pColor,
    TipoEntero pPosX, TipoEntero pPosY) :m_Nombre{ pNombre }, m_Color{ pColor }, m_PosX{ pPosX }, m_PosY{ pPosY } {
}
CRobot::CRobot(TipoString pNombre, TipoCaracter pColor) : m_Nombre{ pNombre }, m_Color{ pColor } {
}
CRobot::~CRobot() {}
void CRobot::setNombre(TipoString pNombre) { this->m_Nombre = pNombre; }
void CRobot::moverse(TipoEntero pPosX, TipoEntero pPosY) {} //--  por implementar
void CRobot::golpear(CRobot pEnemigo) {

}
TipoString   CRobot::getNombre() { return m_Nombre; }
TipoEntero   CRobot::getPosX() { return m_PosX; }
TipoEntero   CRobot::getPosY() { return m_PosY; }
TipoCaracter CRobot::getColor() { return m_Color; }
TipoString CRobot::getPosicion() {
    return "X = " + to_string(m_PosX) + " Y = " + to_string(m_PosY);
}