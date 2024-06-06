#ifndef GERENTE_H
#define GERENTE_H
#include "Funcionario.h"


class Gerente : public Funcionario
{
    private:
        double Bonus_Anual;

    public:
        Gerente(const string nome, int id, /*double SalarioBase,*/ double Bonus_Anual);


        double calc_Salario_Total() const override;

        void exibir() const override;



};

#endif // GERENTE_H
