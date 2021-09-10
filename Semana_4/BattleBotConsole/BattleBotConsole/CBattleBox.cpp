#include "pch.h"
#include "CBattleBox.h"
void CBattleBox::resizePlano(TipoEntero pAltura, TipoEntero pAncho) {
    m_Plano = new TipoCaracter * [pAltura];
    for (size_t i = 0; i < pAltura; ++i)
        m_Plano[i] = new TipoCaracter[pAncho];
}
CBattleBox::CBattleBox() : m_CantRobots{ 0 },
m_Altura{ ALTURA }, m_Ancho{ ANCHO }  {
    /*m_Plano = new TipoCaracter*[m_Altura];
    for (size_t i = 0; i < m_Altura; ++i)
      m_Plano[i] = new TipoCaracter[m_Ancho];*/
    resizePlano(m_Altura, m_Ancho);
}

CBattleBox::CBattleBox(TipoEntero pAltura, TipoEntero pAncho) : m_Altura{ pAltura }, m_Ancho{ pAncho }, m_CantRobots{ 0 } {
    /* m_Plano = new TipoCaracter*[m_Altura];
     for (size_t i = 0; i < m_Altura; ++i)
       m_Plano[i] = new TipoCaracter[m_Ancho];*/
    resizePlano(m_Altura, m_Ancho);
}

CBattleBox::~CBattleBox() {
    for (size_t i = 0; i < m_Altura; ++i) {
        delete[] m_Plano[i];
    }
    delete[] m_Plano;
    m_Plano = nullptr;
}
void CBattleBox::adicionarRobot(CRobot* pRobot) {
    CRobot** temp = new CRobot * [m_CantRobots + 1];
    for (size_t i = 0; i < m_CantRobots; ++i)
        temp[i] = m_Robots[i];
    temp[m_CantRobots] = pRobot;

    delete[] m_Robots;
    m_Robots = temp;
    m_CantRobots++;
}
CRobot* CBattleBox::removerRobot(TipoString pNombre) {
    // Buscando objeto
    auto robot = buscarRobot(pNombre);
    if (robot == nullptr) return nullptr;
    // Eliminando objeto 
    CRobot** temp = new CRobot * [m_CantRobots - 1];
    int j = 0;
    for (size_t i = 0; i < m_CantRobots; ++i)
        if (m_Robots[i] != robot) {
            temp[j] = m_Robots[i];
            j++;
        }
    m_Robots = temp;
    m_CantRobots--;
    return robot;
}
CRobot* CBattleBox::buscarRobot(TipoString pNombre) {
    for (size_t i = 0; i < m_CantRobots; ++i) {
        if (pNombre == m_Robots[i]->getNombre()) {
            return m_Robots[i];
        }
    }
    return nullptr;
}
void CBattleBox::imprimirRobots(ostream& os) {
    for (size_t i = 0; i < m_CantRobots; ++i) {
        os << "* * * * * * [" << i << "] ";
        os << " Nombre = " << m_Robots[i]->getNombre() << " "
            << m_Robots[i]->getPosicion()
            << " Color = " << m_Robots[i]->getColor() << '\n';
    }
}
void CBattleBox::actualizarBattleBox() {
    for (size_t i = 0; i < m_Altura; ++i) {
        for (size_t j = 0; j < m_Ancho; ++j) {
            m_Plano[i][j] = COLOR;
        }
    }
    for (size_t k = 0; k < m_CantRobots; ++k) {
        m_Plano[m_Robots[k]->getPosY()][m_Robots[k]->getPosX()]
            = m_Robots[k]->getColor();
    }
}
void CBattleBox::dibujarBattleBox(ostream& os) {
    os << '\n';
    os << setw(3) << ' ';
    for (size_t j = 0; j < m_Ancho; ++j)
        os << setw(3) << j;
    os << '\n';
    for (size_t i = 0; i < m_Altura; ++i) {
        os << setw(3) << i;
        for (size_t j = 0; j < m_Ancho; ++j) {
            os << setw(3) << m_Plano[i][j];
        }
        os << '\n';
    }
}

TipoEntero CBattleBox::getAltura() {
    return m_Altura;
}

TipoEntero CBattleBox::getAncho() {
    return m_Ancho;
}