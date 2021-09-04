
#include <iostream>
#include <vector>

#include "CPunto2D.h"
void funcionvariasejecuciones(entero valor)
{
	unique_ptr<CPunto2D> obj{ new CPunto2D(5,6) };
	cout << "Objeto " << valor << endl;
}
 
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
	/*
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
	delete ptrP3;
	*/
	//Arreglo dinámico de objetos
	/*
	CPunto2D* ptrPuntos = new CPunto2D[5];
	ptrPuntos[0] = CPunto2D(5, 4);
	ptrPuntos[1] = CPunto2D(6, 2);
	ptrPuntos[2] = CPunto2D(1, 1);
	ptrPuntos[3] = CPunto2D(3, 1);
	ptrPuntos[4] = CPunto2D(2, 2);

	for (auto i = 0; i < 5; ++i) {
		cout << ptrPuntos[i].getX() << ","
			<< (*(ptrPuntos + i)).getY() << endl;
	}
	delete ptrPuntos;
	ptrPuntos = nullptr;
	//otra forma
	CPunto2D* ptrPuntos2 = new CPunto2D[5]
	{ CPunto2D(5, 4),
		CPunto2D(6, 2),
		 CPunto2D(1, 1),
		CPunto2D(3, 1),
		 CPunto2D(2, 2)
	};

	for (auto i = 0; i < 5; ++i) {
		cout << ptrPuntos2[i].getX() << ","
			<< (*(ptrPuntos2 + i)).getY() << endl;
	}
	delete ptrPuntos2;
	ptrPuntos2 = nullptr;
	*/
	//¿Existe alguna alternativa? ---> usando vector de c++
	/*
	vector<CPunto2D> puntos;
	puntos = {
		CPunto2D(5, 4),
		CPunto2D(6, 2),
		 CPunto2D(1, 1),
		CPunto2D(3, 1),
		 CPunto2D(2, 2)
	};
	for (auto i =0; i= puntos.size();i++)
	{
		//TODO
	}
	*/
	//Se crea un arreglo de 5 punteros
	/*
	CPunto2D** puntos = nullptr;
	puntos = new CPunto2D * [5];
	puntos[0] = new CPunto2D(5, 4);
	puntos[1] = new CPunto2D(6, 2);
	puntos[2] = new CPunto2D(3, 1);
	puntos[3] = new CPunto2D(1, 1);
	puntos[4] = new CPunto2D(2, 2);

	for (auto i = 0; i < 5; ++i) {
		cout << puntos[i]->getX() << ","
			<< puntos[i]->getY() << endl;
	}

	for (auto i = 0; i < 5; ++i)
		delete puntos[i];
	delete[] puntos;
	puntos = nullptr;
	*/
	CPunto2D objeto = CPunto2D(5, 2);
	CPunto2D* ptrObj = new CPunto2D(5, 2);
	delete ptrObj;
	//Punteros inteligentes
	unique_ptr<CPunto2D> objeto3{ new CPunto2D(5,6) };
 
	for(auto i = 0;i<10;i++)
	{
		funcionvariasejecuciones(i);
	}
	 
}

