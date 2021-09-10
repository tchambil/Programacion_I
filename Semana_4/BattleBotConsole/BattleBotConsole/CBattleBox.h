#pragma once
#include "CRobot.h" 
const TipoEntero ALTURA = 20;
const TipoEntero ANCHO = 20;
const TipoCaracter COLOR = '.';
class CBattleBox {
private:
    TipoEntero m_Altura;
    TipoEntero m_Ancho;
    TipoCaracter** m_Plano;
    TipoEntero m_CantRobots;
    CRobot** m_Robots = nullptr;
    void resizePlano(TipoEntero pAltura, TipoEntero pAncho);
public:
    CBattleBox();
    CBattleBox(TipoEntero pAltura, TipoEntero pAncho);
    virtual ~CBattleBox();
    void adicionarRobot(CRobot* pRobot);
    CRobot* removerRobot(TipoString pNombre);
    CRobot* buscarRobot(TipoString pNombre);
    void imprimirRobots(ostream& os);
    TipoEntero getAltura();
    TipoEntero getAncho();
    TipoEntero getCantidadObjectos();
    void dibujarBattleBox(ostream& os);
    void actualizarBattleBox();


    //void AdicionarRobots(Robot * robot);
};