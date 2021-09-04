#include "Chofer.h"
Chofer::Chofer() {}
Chofer::~Chofer() {}
void Chofer::setNroLicencia(TipoString pNLicencia) {
    m_NroLicencia = pNLicencia;
}
void Chofer::setNombres(TipoString pNombres) {
    m_Nombres = pNombres;
}
TipoString  Chofer::getNombres() {
    return m_Nombres;
}