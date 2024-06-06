#include <iostream>
#include "Funcionario_Regular.h"


    Funcionario_Regular::Funcionario_Regular(const string nome, int id/*double SalarioBase*/)
    : Funcionario(nome, id/*, SalarioBase*/)
    {

    }

    double Funcionario_Regular::calc_Salario_Total() const
    {
        return SalarioBase;
    }

