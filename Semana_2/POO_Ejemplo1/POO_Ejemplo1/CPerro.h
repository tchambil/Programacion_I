#pragma once
#include <string>
using namespace std;
typedef float decimal;
typedef unsigned int tipoEdad;
class CPerro
{
private:
	decimal m_talla;
	decimal m_peso;
	tipoEdad m_edad;
	string m_nombre;
	void correr();
public:
	
	void morder();
	void ladrar();
	//------metodos de acceso:  setters
	void setTalla(decimal _talla)
	{
		if(_talla>0.0 && _talla<120.00)
			CPerro::m_talla = _talla;
	}
	void setPeso(decimal _peso)
	{
		if(_peso>0.0 && _peso<=80.00)
			CPerro::m_peso = _peso;
	}
	void setEdad(tipoEdad _edad)
	{
		CPerro::m_edad = _edad;
	}
	void setNombre(string _nombre)
	{
		CPerro::m_nombre = _nombre;
	}
	//------metodos de acceso:  getters
	string const getNombre ()
	{
		return  m_nombre;
	}
	decimal getTalla()
	{
		return m_talla;
	}
	decimal getPeso()
	{
		return m_peso;
	}
	decimal getEdad()
	{
		return m_edad;
	}
};