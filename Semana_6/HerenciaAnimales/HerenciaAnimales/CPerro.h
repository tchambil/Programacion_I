#pragma once
#ifndef HERENCIAANIMAL_CPERRO_H
#define HERENCIAANIMAL_CPERRO_H
#include "Tipos.h"
#include "CMamifero.h"
class CPerro: public CMamifero
{
private:
public:
	CPerro(TipoCaracter mGenero, const TipoString& mRegionVive, const TipoString& mNombre, TipoDecimal mPeso,
		TipoEntero mCantAlimento);
	~CPerro();
	virtual TipoString ProduceSonido();
	virtual void Alimentar(ostream& os, CAlimento* pAlimento);
	virtual void ExpresionFelicidad(ostream& os);
};
#endif //HERENCIAANIMAL_CPERRO_H