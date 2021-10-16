#pragma once
#include<vector>
#include "CRectangulo.h"
class CGRectangulo
{
private:
	vector<CRectangulo*> m_Rectangulo;
public:
	CGRectangulo();
	~CGRectangulo();
	void agregaRectangulo(CRectangulo* or );
	CRectangulo* leeRectangulo(int pos);
	CRectangulo* leeUltimo();
	void quitaRectangulo();
	void quitaRectangulo(int pos);
	void imprimeRectangulos();
};

 
