#include <iostream>
#include "Estagiario.h"

    Estagiario::Estagiario(const string nome, int id) //, double SalarioBase)
    : Funcionario(nome, id) //, SalarioBase)
    {

    }

   double Estagiario::calc_Salario_Total() const
   {
    return SalarioBase*0.6;
   }
