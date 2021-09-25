#pragma once
#ifndef HERENCIAANIMAL_CANIMAL_H
#define HERENCIAANIMAL_CANIMAL_H
#include "Tipos.h"
#include "CAlimento.h"
class CAnimal
{
private:
	TipoCaracter m_Genero;
	TipoString m_RegionVive;
protected:
	TipoString m_Nombre;
	TipoDecimal m_Peso;
	TipoEntero m_CantAlimento;
public:
    virtual ~CAnimal();
    CAnimal(TipoCaracter pGenero, const TipoString& pRegionVive, const TipoString& pNombre, TipoDecimal pPeso,
        TipoEntero pCantAlimento);
    TipoCaracter getGenero() const;
    const TipoString& getRegionVive() const;
    const TipoString& getNombre() const;
    TipoDecimal getPeso() const;
    TipoEntero getCantAlimento() const;
    //funciones virtuales
    virtual TipoString ProduceSonido();
    virtual void Alimentar(ostream& os, CAlimento* pAlimento);
};

#endif //HERENCIAANIMAL_CANIMAL_H