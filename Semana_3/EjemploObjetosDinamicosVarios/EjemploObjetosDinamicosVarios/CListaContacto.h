#include "CContacto.h"
#ifndef CListadoContacto_H
#define CListadoContacto_H
class CListadoContacto
{

private:
	CContacto** m_Contactos;
	entero m_Tamano;
public:
	CListadoContacto(void);
	~CListadoContacto();
	void AgregarContacto(CContacto* ptrContacto);
	CContacto* ObtenerContacto(entero pPosition);
	void MostrarContactos();
	entero ObtenerTamano();

};


#endif // !CListadoContacto_H