#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ arg) 
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    MyCalc::MyForm form; //  решение - MyCalc 
    Application::Run(%form);

    return 0;
}