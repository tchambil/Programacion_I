#ifndef CContacto_H
#define CContacto_H
 

#include "iostream"
#include "Tipos.h"
using namespace std;
class CContacto
{
	
private:
	string m_Nombre;
	entero m_Numero;
	string m_Correo;
public:
	CContacto(void);
	CContacto(string _nombre, entero _numero, string _correo);
	~CContacto();
	void SetNombre(string _nombre);
	void SetNumero(entero _numero);
	void SetCorreo(string _correo);
	string getNombre();
	entero getNumero();
	string getCorreo(); 
};

#endif // CContacto_H