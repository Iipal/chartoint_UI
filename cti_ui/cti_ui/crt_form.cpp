#include "crt_form.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	ctiui::crt_form ctiF;

	Application::Run(%ctiF);

	return 0;
}