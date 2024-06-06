#include <iostream>
#include "Funcionario.h"
#include "Funcionario_Regular.h"
#include "Gerente.h"
#include "Estagiario.h"

using std::cout;
using std::endl;

int main()
{
    Funcionario_Regular Regular("Raul", 15);
    Gerente Chefe ("Elio", 20, 5000);
    Estagiario Escravo ("Larissa", 10);

    Regular.exibir();
    cout << "Salario Total: " << Regular.calc_Salario_Total() << endl << endl;

    Chefe.exibir();
    cout << "Salario Total: " << Chefe.calc_Salario_Total() << endl << endl;

    Escravo.exibir();
    cout << "Salario Total: " << Escravo.calc_Salario_Total() << endl << endl;

    return 0;
}
