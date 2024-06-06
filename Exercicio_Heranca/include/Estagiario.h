#ifndef ESTAGIARIO_H
#define ESTAGIARIO_H
#include "Funcionario.h"


class Estagiario : public Funcionario
{

    public:
        Estagiario(const string nome, int id); //, double SalarioBase);


        double calc_Salario_Total() const override;


};

#endif // ESTAGIARIO_H
