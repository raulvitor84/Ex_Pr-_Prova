#include <iostream>
#include <vector>
#include "Classes.h"

using std::vector;

int main()

{

    vector<Veiculo*> frota;

    frota.push_back(new Caminhao("Volvo", "FH", 18, 6));
    frota.push_back(new Van("Ford", "Transit", 1, 12));
    frota.push_back(new Caminhao("Scania", "Bicuda", 30, 3));
    frota.push_back(new Caminhao("Merceds", "1620", 20, 3));
    frota.push_back(new Caminhao("Volks", "22250", 25, 4));
    frota.push_back(new Van("Fiat", "Ducato", 7, 18));

    for (const auto& veiculo : frota) {
        veiculo->exibirDados();
    }

    for (auto& veiculo : frota) {
        delete veiculo;
    }

    return 0;

}

