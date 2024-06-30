#include "MyForm1.h"
#include "login.h"
#include "MyForm2.h"
#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <cstdlib>
#include <conio.h>


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]


int main(array<String^>^ args) {

    Application::SetCompatibleTextRenderingDefault(false);
    Application::EnableVisualStyles();

    autoauto::MyForm1 form1;
    Application::Run(% form1);

    return 0;
}
