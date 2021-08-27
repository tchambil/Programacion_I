 
#include <iostream>
#include "CPerro.h"
int main()
{
	CPerro Simba;
	Simba.setTalla(40.75);
	Simba.setPeso(3500);
	Simba.setEdad(10);
	Simba.setNombre( "Simba");
	cout << "El perro "<<Simba.getNombre()<<" tiene " << Simba.getEdad() << " Anios" << endl;;

	CPerro* Lucky = new CPerro();
	Lucky->setTalla(25.05);
	
	Lucky->setPeso(1500);
	//p2->setEdad(1);
	(*Lucky).setEdad(3);
	Lucky->setNombre("Lucky");
	
	 
	Lucky = nullptr;
}
 