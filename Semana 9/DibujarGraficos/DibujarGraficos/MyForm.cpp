#include "MyForm.h"
#include "MyForm2.h" 
using namespace DibujarGraficos;
void main()
{
	Application::EnableVisualStyles();
	Application::Run(gcnew MyForm2());
} 
