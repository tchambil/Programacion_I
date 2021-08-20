#include "UFunciones.h"

void Intercambiar(TipoEntero* prtNum1, TipoEntero* prtNum2) {

	TipoEntero auxiliar = *prtNum1;
	*prtNum1 = *prtNum2;
	*prtNum2 = auxiliar;
}
