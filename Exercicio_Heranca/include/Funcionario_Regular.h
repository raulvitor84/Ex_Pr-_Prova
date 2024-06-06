#ifndef FUNCIONARIO_REGULAR_H
#define FUNCIONARIO_REGULAR_H
#include "Funcionario.h"


class Funcionario_Regular : public Funcionario
{
    private:


    public:
        Funcionario_Regular(const string nome, int id/*, double SalarioBase*/);



        double calc_Salario_Total() const override;




};

#endif // FUNCIONARIO_REGULAR_H
