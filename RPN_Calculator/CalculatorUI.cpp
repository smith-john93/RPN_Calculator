#include "CalculatorUI.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace CppGUI_Porject;
[STAThread]
int main(array<System::String^>^ args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Create the main window and run it
	Application::Run(gcnew Form1());
	return 0;
}