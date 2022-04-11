#include "pch.h"
#include "mainForm.h"

using namespace System;
using namespace MoneyManager;

[STAThreadAttribute]

int main(array<System::String ^> ^args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew mainForm());

    return 0;
}
