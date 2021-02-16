#include "Calculator_UI.h"

//This will implement other classes to form the backend of the calculator program 
using namespace System;
using namespace System::Windows::Forms;

int main()
{
	//enable visual styles for the application
	Application::EnableVisualStyles;

	//
	Application::SetCompatibleTextRenderingDefault(false);

	//variable of type Calculator, consists of Frontend(GUI) and Backend(Calculator Backend Programming)
	Calculator::Calculator_UI calculator;

	//run the program
	Application::Run(% calculator);
	
	//program end
	return 0;

}
