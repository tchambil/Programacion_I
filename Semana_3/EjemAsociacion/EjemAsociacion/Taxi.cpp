#include "Taxi.h"
Taxi::Taxi() {

}
Taxi::~Taxi() {

}
void Taxi::setPlaca(TipoString pPlaca) {
	m_Placa = pPlaca;
}
void Taxi::setChofer(Chofer* pChofer) {
	m_Chofer = pChofer;
}
void Taxi::setMarca(TipoString pMarca) {
	m_Marca = pMarca;
}
void Taxi::setModelo(TipoString pModelo) {
	m_Modelo = pModelo;
}
TipoString Taxi::getPlaca() {
	return m_Placa;
}
void Taxi::imprimirDatos(ostream& os) {
	os << "Información del Taxi\n";
	os << "----------------------\n";
	os << "Placa : " << m_Placa << endl;
	os << "Chofer : " << m_Chofer->getNombres();
}