#include <iostream>
#include "Gerente.h"
#include "Funcionario.h"

using std::cout;
using std::endl;

    Gerente::Gerente(const string nome, int id /*, double SalarioBase */, double Bonus_Anual)
    : Funcionario(nome, id/*, SalarioBase*/), Bonus_Anual(Bonus_Anual)
    {

    }

    double Gerente::calc_Salario_Total() const
    {
        return SalarioBase + Bonus_Anual;
    }

    void Gerente::exibir() const
    {
        Funcionario::exibir();
        cout << "Bonus Anual: " << Bonus_Anual << endl;
    }
