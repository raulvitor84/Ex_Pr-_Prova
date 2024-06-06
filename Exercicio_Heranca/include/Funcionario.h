#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

using std::string;

class Funcionario
{
     protected:
        string nome;
        int id;
        double SalarioBase = 5000; // Valor atribuido a SalarioBase

    public:
        Funcionario(const string nome, int id/*, double SalarioBase*/); // Comentei o paramentro SalarioBase para atribuir um valor fixo
        virtual ~Funcionario() = default;

        virtual double calc_Salario_Total() const = 0;

        virtual void exibir() const;



};

#endif // FUNCIONARIO_H
