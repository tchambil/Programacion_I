#include "CAnimal.h"

CAnimal::~CAnimal() {}
CAnimal::CAnimal(TipoCaracter pGenero, const TipoString& pRegionVive, const TipoString& pNombre, TipoDecimal pPeso,
    TipoEntero pCantAlimento):m_Genero(pGenero), m_RegionVive(pRegionVive), m_Nombre(pNombre),
    m_Peso(pPeso), m_CantAlimento(pCantAlimento)
{
	
}
TipoCaracter CAnimal::getGenero() const {
    return m_Genero;
}
const TipoString& CAnimal::getRegionVive() const {
    return m_RegionVive;
}

const TipoString& CAnimal::getNombre() const {
    return m_Nombre;
}

TipoDecimal CAnimal::getPeso() const {
    return m_Peso;
}
TipoEntero CAnimal::getCantAlimento() const {
    return m_CantAlimento;
}
TipoString CAnimal::ProduceSonido()
{
    return "El animal dice algo ...";
}
 void CAnimal::Alimentar(ostream& os, CAlimento* pAlimento)
{
	
}

