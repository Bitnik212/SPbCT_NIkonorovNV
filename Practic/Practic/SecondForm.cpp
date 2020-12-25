#include "SecondForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void Main2(cli::array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Practic::MyForm1 form;
	Application::Run(% form);
}

