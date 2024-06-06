#include "Funcionario.h"
#include <iostream>

using std::cout;
using std::endl;


    Funcionario::Funcionario(const string nome, int id/*, double SalarioBase*/)
    {
        this->nome=nome;
        this->id=id;
        /*this->SalarioBase=SalarioBase;*/
    }

    void Funcionario::exibir() const
    {
        cout << "Nome: " << nome << ", ID: " << id << ", Salario Base: " << SalarioBase << endl;
    }
