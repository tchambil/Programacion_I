
#include <iostream>
#include "CPunto2D.h"
int main()
{/*
	CPunto2D p1(5, 2);
	cout << p1.getX() << endl;
	cout << p1.getY() << endl;
	cout << &p1 << endl;
	cout << "------" << endl;

	CPunto2D* ptrP1 = &p1;
	cout << ptrP1->getX() << endl;
	cout << ptrP1->getY() << endl;
	cout << ptrP1 << endl;
	cout << &ptrP1 << endl;
	*/
	//Memoria dinamica (asignación dinámica de memoria 	)

	CPunto2D* ptrP2 = new CPunto2D(55,22);
	CPunto2D* ptrP3 = new CPunto2D(10, 6);
	cout << "--ptr2---" << endl;
	cout << ptrP2->getX() << endl;
	cout << ptrP2->getY() << endl;
	cout << &ptrP2 << endl;
	cout << "--ptr3---" << endl;
	cout << ptrP3->getX() << endl;
	cout << ptrP3->getY() << endl;
	cout << &ptrP3 << endl;
	delete ptrP2;




	 
}

