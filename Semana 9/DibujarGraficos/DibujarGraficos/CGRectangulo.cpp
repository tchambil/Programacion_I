#include "CGRectangulo.h"
CGRectangulo::CGRectangulo() {}
CGRectangulo::~CGRectangulo() {}
void CGRectangulo::agregaRectangulo(CRectangulo* or ) {
	m_Rectangulo.push_back(or );
}
CRectangulo* CGRectangulo::leeRectangulo(TipoEntero pos) {
	return m_Rectangulo[pos];
}
CRectangulo* CGRectangulo::leeUltimo() {
	return m_Rectangulo[m_Rectangulo.size() - 1];
}
void CGRectangulo::quitaRectangulo() {
	m_Rectangulo.pop_back();
}
void CGRectangulo::quitaRectangulo(TipoEntero pos) {
	m_Rectangulo.erase(m_Rectangulo.begin() + pos);
}
void CGRectangulo::imprimeRectangulos() {
	for (size_t i = 0; i < m_Rectangulo.size(); i++)
	{
		cout << "Ancho : " << m_Rectangulo[i]->getAncho() << endl;
		cout << "Alto : " << m_Rectangulo[i]->getAlto() << endl;
	}
}